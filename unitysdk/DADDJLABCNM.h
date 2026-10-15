#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace RPG::GameCore { class ChimeraDuelSwapPositionNode; }
namespace System { class Nullable; }

#define DADDJLABCNM_CTOR_OFFSET UNITYSDK_OFFSET(0xDFC1020)
#define DADDJLABCNM_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0xDFC0F80)

	class DADDJLABCNM : public ::HBLDGJCDJPF
	{
	public:
		::RPG::GameCore::ChimeraDuelSwapPositionNode* EABKOHGCHFP; // 0x10
		::System::Nullable* ICGKFDEILKA; // 0x18
		::System::Nullable* OLCHHDKKPLI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DADDJLABCNM_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + DADDJLABCNM_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};
