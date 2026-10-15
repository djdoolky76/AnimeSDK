#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DLLOHMOOHNE;
class LJFHKAJPFNE;
namespace RPG::GameCore { class StageBaseConfig; }
namespace RPG::GameCore { class StageVoxelDataIndex; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OCEHGBFCHMC_CCTOR_OFFSET UNITYSDK_OFFSET(0xBD5DEC0)
#define OCEHGBFCHMC_CTOR_OFFSET UNITYSDK_OFFSET(0xBD5CF50)
#define OCEHGBFCHMC_DJPJKNKGLPC_OFFSET UNITYSDK_OFFSET(0xBD5D580)
#define OCEHGBFCHMC_HEBBLFJNFFJ_OFFSET UNITYSDK_OFFSET(0xBD5D2D0)
#define OCEHGBFCHMC_HJNIMCNKGJO_OFFSET UNITYSDK_OFFSET(0xBD5D4A0)
#define OCEHGBFCHMC_IFFBNPAOGHJ_OFFSET UNITYSDK_OFFSET(0xBD5D3C0)
#define OCEHGBFCHMC_LHGFLJABAOA_OFFSET UNITYSDK_OFFSET(0xBD5CFF0)
#define OCEHGBFCHMC_PRELOAD_OFFSET UNITYSDK_OFFSET(0xBD5D610)
#define OCEHGBFCHMC__PRELOADVFSDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0xBD5DBC0)
#define OCEHGBFCHMC__SOLVEVFSDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0xBD5DD70)

inline static constexpr unsigned int OCEHGBFCHMC_TypeDefinitionIndex = 73980;

	class OCEHGBFCHMC
	{
	public:
		::LJFHKAJPFNE* BJPKBELGNCM; // 0x48
		::System::Collections::Generic::List_1<::DLLOHMOOHNE*>* ICFFJIAGNDK; // 0x50
		static ::System::Single* StaticGet_MMDLGFNOMHA()
		{
			return (::System::Single*)UnitySDK::FromName("", "OCEHGBFCHMC")->GetStaticField(0x143B0);
		}

		::System::Void _ctor(::LJFHKAJPFNE* a1, ::RPG::GameCore::StageBaseConfig* a2, ::RPG::GameCore::StageVoxelDataIndex* a3)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*, ::RPG::GameCore::StageBaseConfig*, ::RPG::GameCore::StageVoxelDataIndex*))((::PBYTE)hIl2Cpp + OCEHGBFCHMC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCEHGBFCHMC_CCTOR_OFFSET))();
		}

		::System::Boolean LHGFLJABAOA(::UnityEngine::Vector3 a1, ::System::Byte a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Byte))((::PBYTE)hIl2Cpp + OCEHGBFCHMC_LHGFLJABAOA_OFFSET))(this, a1, a2);
		}

		::System::Void HJNIMCNKGJO(::DLLOHMOOHNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLLOHMOOHNE*))((::PBYTE)hIl2Cpp + OCEHGBFCHMC_HJNIMCNKGJO_OFFSET))(this, a1);
		}

		::System::Void DJPJKNKGLPC(::DLLOHMOOHNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLLOHMOOHNE*))((::PBYTE)hIl2Cpp + OCEHGBFCHMC_DJPJKNKGLPC_OFFSET))(this, a1);
		}

		::System::Void Preload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEHGBFCHMC_PRELOAD_OFFSET))(this);
		}

		::System::Void _PreloadVFSDataInternal(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OCEHGBFCHMC__PRELOADVFSDATAINTERNAL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _SolveVFSDataInternal(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OCEHGBFCHMC__SOLVEVFSDATAINTERNAL_OFFSET))(this, a1, a2);
		}

		static ::System::Int64 HEBBLFJNFFJ(::System::Int64 a1, ::RPG::GameCore::StageVoxelDataIndex* a2)
		{
			return ((::System::Int64(*)(::System::Int64, ::RPG::GameCore::StageVoxelDataIndex*))((::PBYTE)hIl2Cpp + OCEHGBFCHMC_HEBBLFJNFFJ_OFFSET))(a1, a2);
		}

		static ::System::Int32 IFFBNPAOGHJ(::System::Int64 a1, ::System::Int64 a2, ::RPG::GameCore::StageVoxelDataIndex* a3)
		{
			return ((::System::Int32(*)(::System::Int64, ::System::Int64, ::RPG::GameCore::StageVoxelDataIndex*))((::PBYTE)hIl2Cpp + OCEHGBFCHMC_IFFBNPAOGHJ_OFFSET))(a1, a2, a3);
		}

	};
