#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFIMNLJALNN;
class IHPIHJDMOPL;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimMusicCueInfo; }
namespace RPG::GameCore { class FiveDimMusicDirectorConfig; }
namespace RPG::GameCore { class FiveDimMusicInfo; }

#define MIDAKCNMMPF_CCNKJDPACMO_OFFSET UNITYSDK_OFFSET(0x1C92B390)
#define MIDAKCNMMPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C92AEB0)
#define MIDAKCNMMPF_DOGPCPLFDEC_OFFSET UNITYSDK_OFFSET(0x1C92B6F0)
#define MIDAKCNMMPF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C92B2E0)
#define MIDAKCNMMPF_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1C92AE90)
#define MIDAKCNMMPF_GONFDGFMNCJ_OFFSET UNITYSDK_OFFSET(0x1C92AFF0)
#define MIDAKCNMMPF_LBKJAPCKMJP_OFFSET UNITYSDK_OFFSET(0x1C92B880)
#define MIDAKCNMMPF_LFIGAHPCMFB_OFFSET UNITYSDK_OFFSET(0x1C92B800)
#define MIDAKCNMMPF_LOMDHHFMGMG_OFFSET UNITYSDK_OFFSET(0x1C92BA00)
#define MIDAKCNMMPF_PEMIEADOHBO_OFFSET UNITYSDK_OFFSET(0x1C92B520)
#define MIDAKCNMMPF_PPNCIPNDEFA_OFFSET UNITYSDK_OFFSET(0x1C92AF20)
#define MIDAKCNMMPF_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1C92AEA0)

inline static constexpr unsigned int MIDAKCNMMPF_TypeDefinitionIndex = 43639;

	class MIDAKCNMMPF : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::GFIMNLJALNN*>* KNFHBBDGLPC; // 0x10
		::RPG::PoolList_1<::IHPIHJDMOPL*>* OLJAFALKMGN; // 0x18
		::System::Single _Length_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::GameCore::FiveDimMusicDirectorConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimMusicDirectorConfig*))((::PBYTE)hIl2Cpp + MIDAKCNMMPF_CTOR_OFFSET))(this, a1);
		}

		::System::Single get_Length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIDAKCNMMPF_GET_LENGTH_OFFSET))(this);
		}

		::System::Void set_Length(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIDAKCNMMPF_SET_LENGTH_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIDAKCNMMPF_FINALIZE_OFFSET))(this);
		}

		::GFIMNLJALNN* CCNKJDPACMO(::System::Double a1, ::System::Double a2)
		{
			return ((::GFIMNLJALNN*(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MIDAKCNMMPF_CCNKJDPACMO_OFFSET))(this, a1, a2);
		}

		::RPG::PoolList_1<::IHPIHJDMOPL*>* PEMIEADOHBO(::System::Int32 a1, ::System::Single a2)
		{
			return ((::RPG::PoolList_1<::IHPIHJDMOPL*>*(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MIDAKCNMMPF_PEMIEADOHBO_OFFSET))(this, a1, a2);
		}

		::System::Int32 DOGPCPLFDEC(::System::Int32 a1, ::System::Double a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + MIDAKCNMMPF_DOGPCPLFDEC_OFFSET))(this, a1, a2);
		}

		::IHPIHJDMOPL* LFIGAHPCMFB(::System::Int32 a1)
		{
			return ((::IHPIHJDMOPL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIDAKCNMMPF_LFIGAHPCMFB_OFFSET))(this, a1);
		}

		::System::Void PPNCIPNDEFA(::RPG::GameCore::FiveDimMusicDirectorConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimMusicDirectorConfig*))((::PBYTE)hIl2Cpp + MIDAKCNMMPF_PPNCIPNDEFA_OFFSET))(this, a1);
		}

		::System::Void LBKJAPCKMJP(::RPG::GameCore::FiveDimMusicInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimMusicInfo*))((::PBYTE)hIl2Cpp + MIDAKCNMMPF_LBKJAPCKMJP_OFFSET))(this, a1);
		}

		::System::Void LOMDHHFMGMG(::RPG::GameCore::FiveDimMusicCueInfo* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimMusicCueInfo*, ::System::Single))((::PBYTE)hIl2Cpp + MIDAKCNMMPF_LOMDHHFMGMG_OFFSET))(this, a1, a2);
		}

		::System::Void GONFDGFMNCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIDAKCNMMPF_GONFDGFMNCJ_OFFSET))(this);
		}

	};
