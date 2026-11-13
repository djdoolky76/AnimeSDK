#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCFDAHOHJEA.h"
namespace System { class String; }

#define LMKFIMPGFFK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFD44B0)
#define LMKFIMPGFFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD4480)
#define LMKFIMPGFFK_FKDFBDLNOEK_OFFSET UNITYSDK_OFFSET(0x1AFD4430)
#define LMKFIMPGFFK__ONBIND_OFFSET UNITYSDK_OFFSET(0x1AFD4050)

inline static constexpr unsigned int LMKFIMPGFFK_TypeDefinitionIndex = 73478;

	class LMKFIMPGFFK : public ::BCFDAHOHJEA
	{
	public:
		static ::System::String** StaticGet_JFCMCPFPDFP()
		{
			return (::System::String**)UnitySDK::FromName("", "LMKFIMPGFFK")->GetStaticField(0x19D90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKFIMPGFFK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMKFIMPGFFK_CCTOR_OFFSET))();
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKFIMPGFFK__ONBIND_OFFSET))(this);
		}

		::System::Void FKDFBDLNOEK(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LMKFIMPGFFK_FKDFBDLNOEK_OFFSET))(this, a1, a2);
		}

	};
