#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOMFGKDLHIB;
class FDPALAEIHPB;
namespace RPG::GameCore { class MatchThreeScoreCurveRow; }

#define MJAOIAHENKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C92BD40)
#define MJAOIAHENKN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C92BD50)
#define MJAOIAHENKN_IODJPPLKCEF_OFFSET UNITYSDK_OFFSET(0x1C92C1C0)
#define MJAOIAHENKN_JHCPJOOLJEC_OFFSET UNITYSDK_OFFSET(0x1C92C430)

inline static constexpr unsigned int MJAOIAHENKN_TypeDefinitionIndex = 42308;

	class MJAOIAHENKN : public ::System::Object
	{
	public:
		::BOMFGKDLHIB* PDENFEFCAGN; // 0x10
		::FDPALAEIHPB* FKINCGODJEP; // 0x18
		::System::Single COCJDAKNIAP; // 0x20
		::System::UInt32 EOMLMNOEKDJ; // 0x24
		::System::Void _ctor(::FDPALAEIHPB* a1, ::BOMFGKDLHIB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::BOMFGKDLHIB*))((::PBYTE)hIl2Cpp + MJAOIAHENKN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJAOIAHENKN_EXECUTE_OFFSET))(this);
		}

		::System::Void JHCPJOOLJEC(::RPG::GameCore::MatchThreeScoreCurveRow* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MatchThreeScoreCurveRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + MJAOIAHENKN_JHCPJOOLJEC_OFFSET))(this, a1, a2);
		}

		::System::Void IODJPPLKCEF(::System::UInt32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MJAOIAHENKN_IODJPPLKCEF_OFFSET))(this, a1, a2, a3);
		}

	};
