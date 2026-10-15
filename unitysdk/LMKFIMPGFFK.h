#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCFDAHOHJEA.h"
namespace System { class String; }

#define LMKFIMPGFFK_CCTOR_OFFSET UNITYSDK_OFFSET(0xB7CE4C0)
#define LMKFIMPGFFK_CTOR_OFFSET UNITYSDK_OFFSET(0xB7CE490)
#define LMKFIMPGFFK_FKDFBDLNOEK_OFFSET UNITYSDK_OFFSET(0xB7CE440)
#define LMKFIMPGFFK__ONBIND_OFFSET UNITYSDK_OFFSET(0xB7CE120)

inline static constexpr unsigned int LMKFIMPGFFK_TypeDefinitionIndex = 71494;

	class LMKFIMPGFFK : public ::BCFDAHOHJEA
	{
	public:
		static ::System::String** StaticGet_JFCMCPFPDFP()
		{
			return (::System::String**)UnitySDK::FromName("", "LMKFIMPGFFK")->GetStaticField(0x2D510);
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
