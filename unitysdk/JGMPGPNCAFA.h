#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BillboardShowType.h"
#include "unitysdk/System/Object.h"
class JGMPGPNCAFA;

#define JGMPGPNCAFA_COMPARE_OFFSET UNITYSDK_OFFSET(0xB19F070)
#define JGMPGPNCAFA_CTOR_OFFSET UNITYSDK_OFFSET(0xB19F140)
#define JGMPGPNCAFA_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xB19F0D0)

inline static constexpr unsigned int JGMPGPNCAFA_TypeDefinitionIndex = 74971;

	class JGMPGPNCAFA : public ::System::Object
	{
	public:
		static ::JGMPGPNCAFA** StaticGet_EMLNOINPICJ()
		{
			return (::JGMPGPNCAFA**)UnitySDK::FromName("", "JGMPGPNCAFA")->GetStaticField(0x101B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGMPGPNCAFA_CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::RPG::Client::BillboardShowType a1, ::RPG::Client::BillboardShowType a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BillboardShowType, ::RPG::Client::BillboardShowType))((::PBYTE)hIl2Cpp + JGMPGPNCAFA_COMPARE_OFFSET))(this, a1, a2);
		}

		static ::JGMPGPNCAFA* GGBLHEHJBDO()
		{
			return ((::JGMPGPNCAFA*(*)())((::PBYTE)hIl2Cpp + JGMPGPNCAFA_GGBLHEHJBDO_OFFSET))();
		}

	};
