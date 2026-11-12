#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class BBOFEHOPCEC;
class DIBPAJHLFIF;
class GELIALJDFBL;
class MJNGFEGNCOA;
namespace System { class String; }

#define BDOGIDPIEGG_CTOR_OFFSET UNITYSDK_OFFSET(0xB7BBBC0)
#define BDOGIDPIEGG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7BB690)
#define BDOGIDPIEGG_JCCFLPOHAEF_OFFSET UNITYSDK_OFFSET(0xB7BBBB0)
#define BDOGIDPIEGG_KCKGCEBBCIE_OFFSET UNITYSDK_OFFSET(0xB7BB9A0)
#define BDOGIDPIEGG_LANBJANKLON_OFFSET UNITYSDK_OFFSET(0xB7BB8D0)
#define BDOGIDPIEGG_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xB7BB3B0)
#define BDOGIDPIEGG_LNBBIGFDAEH_OFFSET UNITYSDK_OFFSET(0xB7BB7B0)
#define BDOGIDPIEGG_NLOLABEDPHJ_OFFSET UNITYSDK_OFFSET(0xB7BB940)
#define BDOGIDPIEGG__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xB7BB2F0)

inline static constexpr unsigned int BDOGIDPIEGG_TypeDefinitionIndex = 55193;

	class BDOGIDPIEGG : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::DIBPAJHLFIF* KADDKEGNCHE; // 0x18
		::GELIALJDFBL* LHJBPEBMKDN; // 0x20
		::BBOFEHOPCEC* HDMEPPFFIDK; // 0x28
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
