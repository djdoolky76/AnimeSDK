#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PIIGDBJFNCP_MHKMALKHMCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1A9CBA50)

inline static constexpr unsigned int PIIGDBJFNCP_MHKMALKHMCJ_TypeDefinitionIndex = 57163;

	class PIIGDBJFNCP_MHKMALKHMCJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::FixPoint>* EEBIPMBCMED; // 0x10
		::System::Boolean AAMBGHEEACK; // 0x18
		::System::Byte _padding0[0x7];
		::System::Double ONNIAEPAHGE; // 0x20
		::System::UInt32 JFDHJABDMOH; // 0x28
		::System::UInt32 ILHPFNCIOJN; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIGDBJFNCP_MHKMALKHMCJ_CTOR_OFFSET))(this);
		}

	};
