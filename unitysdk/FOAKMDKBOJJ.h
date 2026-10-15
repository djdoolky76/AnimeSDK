#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NLKFLEHLHAD.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FOAKMDKBOJJ;
class NGEHNDIFKLM;

#define FOAKMDKBOJJ_AHNDFMPEMPM_1_OFFSET UNITYSDK_OFFSET(0x158DF9E0)
#define FOAKMDKBOJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x158DFAF0)
#define FOAKMDKBOJJ_HKDOBJEOIJD_1_OFFSET UNITYSDK_OFFSET(0x158DF8D0)
#define FOAKMDKBOJJ_JEAFEADEIBL_1_OFFSET UNITYSDK_OFFSET(0x158DF660)
#define FOAKMDKBOJJ_KLDPIEICGEA_OFFSET UNITYSDK_OFFSET(0x158DF770)
#define FOAKMDKBOJJ_PPFIMGLNLMG_OFFSET UNITYSDK_OFFSET(0x158DF610)

	class FOAKMDKBOJJ : public ::System::Object
	{
	public:
		::Il2CppArray<::NLKFLEHLHAD>* ANKPNGIBACG; // 0x10
		::System::Int32 GLDGKICGFKD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAKMDKBOJJ_CTOR_OFFSET))(this);
		}

		::System::Int32 PPFIMGLNLMG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAKMDKBOJJ_PPFIMGLNLMG_OFFSET))(this);
		}

		::FOAKMDKBOJJ* JEAFEADEIBL_1(::RPG::GameCore::FixPoint a1)
		{
			return ((::FOAKMDKBOJJ*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + FOAKMDKBOJJ_JEAFEADEIBL_1_OFFSET))(this, a1);
		}

		::FOAKMDKBOJJ* HKDOBJEOIJD_1(::RPG::GameCore::FixPoint a1)
		{
			return ((::FOAKMDKBOJJ*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + FOAKMDKBOJJ_HKDOBJEOIJD_1_OFFSET))(this, a1);
		}

		::FOAKMDKBOJJ* AHNDFMPEMPM_1(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::FOAKMDKBOJJ*(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + FOAKMDKBOJJ_AHNDFMPEMPM_1_OFFSET))(this, a1, a2);
		}

		::FOAKMDKBOJJ* KLDPIEICGEA(::NGEHNDIFKLM* a1)
		{
			return ((::FOAKMDKBOJJ*(*)(::PVOID, ::NGEHNDIFKLM*))((::PBYTE)hIl2Cpp + FOAKMDKBOJJ_KLDPIEICGEA_OFFSET))(this, a1);
		}

	};
