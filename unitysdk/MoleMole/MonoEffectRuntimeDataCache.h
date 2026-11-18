#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class JEGHAFPCJKK;
namespace MoleMole { class FloatRendererFader; }
namespace MoleMole { class LightFader; }
namespace MoleMole { class MatKeyPropValueFaderByIndex; }
namespace MoleMole { class MatKeyWordFaderByIndex; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOEFFECTRUNTIMEDATACACHE_GET_FULLYCACHED_OFFSET UNITYSDK_OFFSET(0x6EDFB0)
#define MOLEMOLE_MONOEFFECTRUNTIMEDATACACHE_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x6EE020)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectRuntimeDataCache_TypeDefinitionIndex = 75386;

	struct alignas(8) MonoEffectRuntimeDataCache
	{
		::System::Boolean LightCached; // 0x10
		::System::Byte _padding0[0x7];
		::Il2CppArray<::MoleMole::LightFader*>* LightFaderArray; // 0x18
		::Il2CppArray<::System::Single>* LightCtrlArray; // 0x20
		::System::Boolean AlphaFaderCached; // 0x28
		::System::Byte _padding1[0x7];
		::Il2CppArray<::MoleMole::FloatRendererFader*>* AlphaFaderArray; // 0x30
		::System::Boolean AlphaFaderTLCached; // 0x38
		::System::Byte _padding2[0x7];
		::Il2CppArray<::MoleMole::FloatRendererFader*>* AlphaFaderTLArray; // 0x40
		::Il2CppArray<::System::Single>* RendererCtrlArray; // 0x48
		::System::Boolean DitherFaderCached; // 0x50
		::System::Byte _padding3[0x7];
		::Il2CppArray<::MoleMole::FloatRendererFader*>* DitherFaderArray; // 0x58
		::Il2CppArray<::MoleMole::MatKeyWordFaderByIndex*>* DitherMatFaderArray; // 0x60
		::System::Boolean ColorAdjustmentFadersCached; // 0x68
		::System::Byte _padding4[0x7];
		::Il2CppArray<::MoleMole::MatKeyWordFaderByIndex*>* ColorCorrectionMatFaderArray; // 0x70
		::Il2CppArray<::MoleMole::MatKeyPropValueFaderByIndex*>* ColorCorrectionMatLerpFaderArray; // 0x78
		::System::Boolean BuffFadersCached; // 0x80
		::System::Byte _padding5[0x7];
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::FloatRendererFader*>*>* BuffRendererFaderDict; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::JEGHAFPCJKK*>*>* BuffKeywordFaderDict; // 0x90

		::System::Boolean get_FullyCached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTRUNTIMEDATACACHE_GET_FULLYCACHED_OFFSET))(this);
		}

		::System::Void NPOLNFDBOOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTRUNTIMEDATACACHE_NPOLNFDBOOD_OFFSET))(this);
		}
	};
}
