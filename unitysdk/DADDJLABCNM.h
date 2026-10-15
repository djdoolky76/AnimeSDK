#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
#include "unitysdk/System/Nullable_1.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace RPG::GameCore { class ChimeraDuelSwapPositionNode; }

#define DADDJLABCNM_CTOR_OFFSET UNITYSDK_OFFSET(0xDFB7300)
#define DADDJLABCNM_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0xDFB7260)

inline static constexpr unsigned int DADDJLABCNM_TypeDefinitionIndex = 77697;

	class DADDJLABCNM : public ::HBLDGJCDJPF
	{
	public:
		::RPG::GameCore::ChimeraDuelSwapPositionNode* EABKOHGCHFP; // 0x10
		::System::Nullable_1<::System::Int32> ICGKFDEILKA; // 0x18
		::System::Nullable_1<::System::Int32> OLCHHDKKPLI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DADDJLABCNM_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + DADDJLABCNM_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};
