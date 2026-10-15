#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/IgnoreCollisionReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IIGOMIPBAHB_ADMMCOLJKLB_OFFSET UNITYSDK_OFFSET(0x1CB49010)
#define IIGOMIPBAHB_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB48960)
#define IIGOMIPBAHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB49400)
#define IIGOMIPBAHB_FGGGAJKHNDI_OFFSET UNITYSDK_OFFSET(0x1CB49110)
#define IIGOMIPBAHB_HMGCGDJIALK_OFFSET UNITYSDK_OFFSET(0x1CB48AB0)
#define IIGOMIPBAHB_JNGJFMFECFE_OFFSET UNITYSDK_OFFSET(0x1CB48B40)
#define IIGOMIPBAHB_LJHNFBBEBPM_OFFSET UNITYSDK_OFFSET(0x1CB48EA0)
#define IIGOMIPBAHB_MMBFAMNFOMH_OFFSET UNITYSDK_OFFSET(0x1CB48CF0)
#define IIGOMIPBAHB_PCFFECLCDAP_OFFSET UNITYSDK_OFFSET(0x1CB49350)

inline static constexpr unsigned int IIGOMIPBAHB_TypeDefinitionIndex = 43263;

	class IIGOMIPBAHB : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::RPG::Client::LittleGame::FiveDim::IgnoreCollisionReason>* DPEFCHKHOEA; // 0x10
		::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*>* LELLAOBKMGM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGOMIPBAHB_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGOMIPBAHB_CLEAR_OFFSET))(this);
		}

		::System::Boolean HMGCGDJIALK(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IIGOMIPBAHB_HMGCGDJIALK_OFFSET))(this, a1, a2);
		}

		::System::Boolean JNGJFMFECFE(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::LittleGame::FiveDim::IgnoreCollisionReason a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::Client::LittleGame::FiveDim::IgnoreCollisionReason))((::PBYTE)hIl2Cpp + IIGOMIPBAHB_JNGJFMFECFE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean LJHNFBBEBPM(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::LittleGame::FiveDim::IgnoreCollisionReason a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::Client::LittleGame::FiveDim::IgnoreCollisionReason))((::PBYTE)hIl2Cpp + IIGOMIPBAHB_LJHNFBBEBPM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FGGGAJKHNDI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IIGOMIPBAHB_FGGGAJKHNDI_OFFSET))(this, a1);
		}

		::System::Void PCFFECLCDAP(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + IIGOMIPBAHB_PCFFECLCDAP_OFFSET))(this, a1, a2);
		}

		::System::Void MMBFAMNFOMH(::System::Int32 a1, ::System::ValueTuple_2<::System::Int32, ::System::Int32> a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + IIGOMIPBAHB_MMBFAMNFOMH_OFFSET))(this, a1, a2);
		}

		::System::Void ADMMCOLJKLB(::System::Int32 a1, ::System::ValueTuple_2<::System::Int32, ::System::Int32> a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + IIGOMIPBAHB_ADMMCOLJKLB_OFFSET))(this, a1, a2);
		}

	};
