#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHPPNBMEBKD;
namespace System { class Object; }

#define LHPPNBMEBKD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E96A020)
#define LHPPNBMEBKD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E96A050)
#define LHPPNBMEBKD___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E96A060)

inline static constexpr unsigned int LHPPNBMEBKD___c_TypeDefinitionIndex = 26033;

	class LHPPNBMEBKD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHPPNBMEBKD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPPNBMEBKD___C_CTOR_OFFSET))(this);
		}

		::LHPPNBMEBKD* __cctor_b__18_0()
		{
			return ((::LHPPNBMEBKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPPNBMEBKD___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
