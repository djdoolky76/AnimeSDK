#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDFLAIAOEKC;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimDanmuManagerConfig; }
namespace RPG::GameCore { class FiveDimDanmuTrack; }

#define FIKCELBIPJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC322C0)
#define FIKCELBIPJM_FPCBOACOLDK_OFFSET UNITYSDK_OFFSET(0x1DC31FE0)
#define FIKCELBIPJM_OLIBOBNAGBG_OFFSET UNITYSDK_OFFSET(0x1DC32220)
#define FIKCELBIPJM_PANOONGGPNA_OFFSET UNITYSDK_OFFSET(0x1DC32170)

inline static constexpr unsigned int FIKCELBIPJM_TypeDefinitionIndex = 44386;

	class FIKCELBIPJM : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimDanmuManagerConfig* EABKOHGCHFP; // 0x10
		::DDFLAIAOEKC* MEPFOEEGBEA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIKCELBIPJM_CTOR_OFFSET))(this);
		}

		::RPG::PoolList_1<::RPG::GameCore::FiveDimDanmuTrack*>* FPCBOACOLDK(::System::UInt32 a1)
		{
			return ((::RPG::PoolList_1<::RPG::GameCore::FiveDimDanmuTrack*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FIKCELBIPJM_FPCBOACOLDK_OFFSET))(this, a1);
		}

		::RPG::GameCore::FiveDimDanmuTrack* OLIBOBNAGBG(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FiveDimDanmuTrack*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FIKCELBIPJM_OLIBOBNAGBG_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* PANOONGGPNA(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FIKCELBIPJM_PANOONGGPNA_OFFSET))(this, a1);
		}

	};
