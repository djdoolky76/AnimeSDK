#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class BBOFEHOPCEC;
class DIBPAJHLFIF;
class GELIALJDFBL;
class MJNGFEGNCOA;
namespace System { class String; }

#define BDOGIDPIEGG_CTOR_OFFSET UNITYSDK_OFFSET(0x16306960)
#define BDOGIDPIEGG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16306430)
#define BDOGIDPIEGG_JCCFLPOHAEF_OFFSET UNITYSDK_OFFSET(0x16306950)
#define BDOGIDPIEGG_KCKGCEBBCIE_OFFSET UNITYSDK_OFFSET(0x16306740)
#define BDOGIDPIEGG_LANBJANKLON_OFFSET UNITYSDK_OFFSET(0x16306670)
#define BDOGIDPIEGG_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x16306150)
#define BDOGIDPIEGG_LNBBIGFDAEH_OFFSET UNITYSDK_OFFSET(0x16306550)
#define BDOGIDPIEGG_NLOLABEDPHJ_OFFSET UNITYSDK_OFFSET(0x163066E0)
#define BDOGIDPIEGG__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x16306090)

	class BDOGIDPIEGG : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::BBOFEHOPCEC* HDMEPPFFIDK; // 0x18
		::DIBPAJHLFIF* KADDKEGNCHE; // 0x20
		::GELIALJDFBL* LHJBPEBMKDN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOGIDPIEGG_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOGIDPIEGG__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BDOGIDPIEGG_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOGIDPIEGG_DISPOSE_OFFSET))(this);
		}

		::System::Boolean LNBBIGFDAEH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOGIDPIEGG_LNBBIGFDAEH_OFFSET))(this);
		}

		::System::Void LANBJANKLON(::DIBPAJHLFIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIBPAJHLFIF*))((::PBYTE)hIl2Cpp + BDOGIDPIEGG_LANBJANKLON_OFFSET))(this, a1);
		}

		::System::Void NLOLABEDPHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOGIDPIEGG_NLOLABEDPHJ_OFFSET))(this);
		}

		::System::Void KCKGCEBBCIE(::MJNGFEGNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJNGFEGNCOA*))((::PBYTE)hIl2Cpp + BDOGIDPIEGG_KCKGCEBBCIE_OFFSET))(this, a1);
		}

		::DIBPAJHLFIF* JCCFLPOHAEF()
		{
			return ((::DIBPAJHLFIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOGIDPIEGG_JCCFLPOHAEF_OFFSET))(this);
		}

	};
