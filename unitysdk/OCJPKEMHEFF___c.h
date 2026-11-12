#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCJPKEMHEFF;
namespace System { class Object; }

#define OCJPKEMHEFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0B6020)
#define OCJPKEMHEFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0B6060)
#define OCJPKEMHEFF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F0B6070)

inline static constexpr unsigned int OCJPKEMHEFF___c_TypeDefinitionIndex = 34533;

	class OCJPKEMHEFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCBA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCJPKEMHEFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJPKEMHEFF___C_CTOR_OFFSET))(this);
		}

		::OCJPKEMHEFF* __cctor_b__23_0()
		{
			return ((::OCJPKEMHEFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJPKEMHEFF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
