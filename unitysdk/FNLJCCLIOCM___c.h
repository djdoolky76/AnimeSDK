#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNLJCCLIOCM;
namespace System { class Object; }

#define FNLJCCLIOCM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C61F0)
#define FNLJCCLIOCM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C6220)
#define FNLJCCLIOCM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E3C6230)

inline static constexpr unsigned int FNLJCCLIOCM___c_TypeDefinitionIndex = 29082;

	class FNLJCCLIOCM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DF40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNLJCCLIOCM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLJCCLIOCM___C_CTOR_OFFSET))(this);
		}

		::FNLJCCLIOCM* __cctor_b__33_0()
		{
			return ((::FNLJCCLIOCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLJCCLIOCM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
