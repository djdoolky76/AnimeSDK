#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BillboardShowType.h"
#include "unitysdk/System/Object.h"
class JGMPGPNCAFA;

#define JGMPGPNCAFA_COMPARE_OFFSET UNITYSDK_OFFSET(0xB198D00)
#define JGMPGPNCAFA_CTOR_OFFSET UNITYSDK_OFFSET(0xB198DD0)
#define JGMPGPNCAFA_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xB198D60)

inline static constexpr unsigned int JGMPGPNCAFA_TypeDefinitionIndex = 74970;

	class JGMPGPNCAFA : public ::System::Object
	{
	public:
		static ::JGMPGPNCAFA** StaticGet_EMLNOINPICJ()
		{
			return (::JGMPGPNCAFA**)UnitySDK::FromName("", "JGMPGPNCAFA")->GetStaticField(0x10E70);
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
