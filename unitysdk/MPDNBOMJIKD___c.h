#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MPDNBOMJIKD;
namespace System { class Object; }

#define MPDNBOMJIKD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAB6FD0)
#define MPDNBOMJIKD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB7000)
#define MPDNBOMJIKD___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EAB7010)

inline static constexpr unsigned int MPDNBOMJIKD___c_TypeDefinitionIndex = 32113;

	class MPDNBOMJIKD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B5E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPDNBOMJIKD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDNBOMJIKD___C_CTOR_OFFSET))(this);
		}

		::MPDNBOMJIKD* __cctor_b__38_0()
		{
			return ((::MPDNBOMJIKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDNBOMJIKD___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
