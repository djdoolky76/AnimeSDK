#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMNNNCHNPKP;
namespace System { class Object; }

#define EMNNNCHNPKP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B9E70)
#define EMNNNCHNPKP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B9EB0)
#define EMNNNCHNPKP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E2B9EC0)

inline static constexpr unsigned int EMNNNCHNPKP___c_TypeDefinitionIndex = 28632;

	class EMNNNCHNPKP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43EB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMNNNCHNPKP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMNNNCHNPKP___C_CTOR_OFFSET))(this);
		}

		::EMNNNCHNPKP* __cctor_b__33_0()
		{
			return ((::EMNNNCHNPKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMNNNCHNPKP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
