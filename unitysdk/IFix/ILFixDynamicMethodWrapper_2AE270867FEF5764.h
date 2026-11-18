#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Nap/NapECS/ArchetypeComponentAccessScopedLock.h"
#include "unitysdk/Nap/NapECS/ArchetypeComponentAccessor.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/Nap/NapECS/EcsArchetypeDataTransfer.h"
#include "unitysdk/Nap/NapECS/EcsCompFilter.h"
#include "unitysdk/Nap/NapECS/EcsComponentMetaInfo.h"
#include "unitysdk/Nap/NapECS/EcsDataCompScopeWriter.h"
#include "unitysdk/Nap/NapECS/EcsWorldTypeMeta.h"
#include "unitysdk/Nap/NapECS/EcsWorld_EntityAddMonitor.h"
#include "unitysdk/Nap/NapECS/EcsWorld_EntityChangedMonitor.h"
#include "unitysdk/Nap/NapECS/EcsWorld_EntityComponentMaskMap_ComponentMaskPredicateAlwaysTrue.h"
#include "unitysdk/Nap/NapECS/EcsWorld_EntityComponentMaskMap_ComponentMaskPredicatePassFilter.h"
#include "unitysdk/Nap/NapECS/EcsWorld_EntityRemoveMonitor.h"
#include "unitysdk/Nap/NapECS/QueryMask.h"
#include "unitysdk/Nap/NapECS/SyncTimeContext.h"
#include "unitysdk/Nap/NapECS/SyncTimestamp.h"
#include "unitysdk/ProfilingRecorder/SystemTimeRecorder_SystemAverageEntry.h"
#include "unitysdk/ProfilingRecorder/SystemTimeRecorder_SystemTimeDelta.h"
#include "unitysdk/ProfilingRecorder/SystemTimeRecorder_SystemTimeEntry.h"
#include "unitysdk/ProfilingRecorder/SystemTimeRecorder_SystemTimeSnapshot.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace IFix { class ILFixDynamicMethodWrapper; }
namespace IFix::Core { class VirtualMachine; }
namespace Nap::NapECS { class EcsComponent; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Type; }

#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDF42F0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDE5D70)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_0_OFFSET UNITYSDK_OFFSET(0x1CDE5D80)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_100_OFFSET UNITYSDK_OFFSET(0x1CDF13B0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_101_OFFSET UNITYSDK_OFFSET(0x1CDF15D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_102_OFFSET UNITYSDK_OFFSET(0x1CDF17D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_103_OFFSET UNITYSDK_OFFSET(0x1CDF1A10)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_104_OFFSET UNITYSDK_OFFSET(0x1CDF1CE0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_105_OFFSET UNITYSDK_OFFSET(0x1CDF1FB0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_106_OFFSET UNITYSDK_OFFSET(0x1CDF2190)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_107_OFFSET UNITYSDK_OFFSET(0x1CDF2310)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_10_OFFSET UNITYSDK_OFFSET(0x1CDE72A0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_110_OFFSET UNITYSDK_OFFSET(0x1CDF2530)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_111_OFFSET UNITYSDK_OFFSET(0x1CDF27F0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_112_OFFSET UNITYSDK_OFFSET(0x1CDF2A80)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_114_OFFSET UNITYSDK_OFFSET(0x1CDF2CF0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_117_OFFSET UNITYSDK_OFFSET(0x1CDF2EE0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_118_OFFSET UNITYSDK_OFFSET(0x1CDF3160)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_119_OFFSET UNITYSDK_OFFSET(0x1CDF3350)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_11_OFFSET UNITYSDK_OFFSET(0x1CDE7550)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_125_OFFSET UNITYSDK_OFFSET(0x1CDF3540)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_126_OFFSET UNITYSDK_OFFSET(0x1CDF3840)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_127_OFFSET UNITYSDK_OFFSET(0x1CDF3B50)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_128_OFFSET UNITYSDK_OFFSET(0x1CDF3E60)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_129_OFFSET UNITYSDK_OFFSET(0x1CDF4160)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_12_OFFSET UNITYSDK_OFFSET(0x1CDE77F0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_13_OFFSET UNITYSDK_OFFSET(0x1CDE7B10)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_14_OFFSET UNITYSDK_OFFSET(0x1CDE7DB0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_15_OFFSET UNITYSDK_OFFSET(0x1CDE7FB0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_16_OFFSET UNITYSDK_OFFSET(0x1CDE8280)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_17_OFFSET UNITYSDK_OFFSET(0x1CDE8540)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_18_OFFSET UNITYSDK_OFFSET(0x1CDE8750)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_19_OFFSET UNITYSDK_OFFSET(0x1CDE8B20)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_1_OFFSET UNITYSDK_OFFSET(0x1CDE6090)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_20_OFFSET UNITYSDK_OFFSET(0x1CDE8DC0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_21_OFFSET UNITYSDK_OFFSET(0x1CDE9020)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_22_OFFSET UNITYSDK_OFFSET(0x1CDE92D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_23_OFFSET UNITYSDK_OFFSET(0x1CDE94C0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_25_OFFSET UNITYSDK_OFFSET(0x1CDE9730)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_26_OFFSET UNITYSDK_OFFSET(0x1CDE9940)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_27_OFFSET UNITYSDK_OFFSET(0x1CDE9B30)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_28_OFFSET UNITYSDK_OFFSET(0x1CDE9C80)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_29_OFFSET UNITYSDK_OFFSET(0x1CDE9E80)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_2_OFFSET UNITYSDK_OFFSET(0x1CDE6390)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_30_OFFSET UNITYSDK_OFFSET(0x1CDE9FE0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_32_OFFSET UNITYSDK_OFFSET(0x1CDEA110)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_33_OFFSET UNITYSDK_OFFSET(0x1CDEA280)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_34_OFFSET UNITYSDK_OFFSET(0x1CDEA3F0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_35_OFFSET UNITYSDK_OFFSET(0x1CDEA5B0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_36_OFFSET UNITYSDK_OFFSET(0x1CDEA710)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_37_OFFSET UNITYSDK_OFFSET(0x1CDEA880)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_38_OFFSET UNITYSDK_OFFSET(0x1CDEA9E0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_39_OFFSET UNITYSDK_OFFSET(0x1CDEAB40)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_3_OFFSET UNITYSDK_OFFSET(0x1CDE65D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_40_OFFSET UNITYSDK_OFFSET(0x1CDEACE0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_41_OFFSET UNITYSDK_OFFSET(0x1CDEAE60)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_42_OFFSET UNITYSDK_OFFSET(0x1CDEAFB0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_43_OFFSET UNITYSDK_OFFSET(0x1CDEB1B0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_44_OFFSET UNITYSDK_OFFSET(0x1CDEB3B0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_45_OFFSET UNITYSDK_OFFSET(0x1CDEB5B0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_46_OFFSET UNITYSDK_OFFSET(0x1CDEB840)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_47_OFFSET UNITYSDK_OFFSET(0x1CDEB9B0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_48_OFFSET UNITYSDK_OFFSET(0x1CDEBB80)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_49_OFFSET UNITYSDK_OFFSET(0x1CDEBD20)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_4_OFFSET UNITYSDK_OFFSET(0x1CDE67C0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_50_OFFSET UNITYSDK_OFFSET(0x1CDEBED0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_51_OFFSET UNITYSDK_OFFSET(0x1CDEC130)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_52_OFFSET UNITYSDK_OFFSET(0x1CDEC4D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_53_OFFSET UNITYSDK_OFFSET(0x1CDEC780)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_54_OFFSET UNITYSDK_OFFSET(0x1CDECB20)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_55_OFFSET UNITYSDK_OFFSET(0x1CDECC70)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_56_OFFSET UNITYSDK_OFFSET(0x1CDECEA0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_57_OFFSET UNITYSDK_OFFSET(0x1CDED000)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_58_OFFSET UNITYSDK_OFFSET(0x1CDED330)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_59_OFFSET UNITYSDK_OFFSET(0x1CDED5B0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_5_OFFSET UNITYSDK_OFFSET(0x1CDE6900)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_60_OFFSET UNITYSDK_OFFSET(0x1CDED6F0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_61_OFFSET UNITYSDK_OFFSET(0x1CDED870)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_62_OFFSET UNITYSDK_OFFSET(0x1CDED9D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_63_OFFSET UNITYSDK_OFFSET(0x1CDEDB10)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_64_OFFSET UNITYSDK_OFFSET(0x1CDEDC80)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_67_OFFSET UNITYSDK_OFFSET(0x1CDEDEC0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_68_OFFSET UNITYSDK_OFFSET(0x1CDEE090)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_6_OFFSET UNITYSDK_OFFSET(0x1CDE6A50)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_70_OFFSET UNITYSDK_OFFSET(0x1CDEE370)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_71_OFFSET UNITYSDK_OFFSET(0x1CDEE4D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_72_OFFSET UNITYSDK_OFFSET(0x1CDEE620)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_73_OFFSET UNITYSDK_OFFSET(0x1CDEE790)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_76_OFFSET UNITYSDK_OFFSET(0x1CDEEA70)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_77_OFFSET UNITYSDK_OFFSET(0x1CDEECA0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_78_OFFSET UNITYSDK_OFFSET(0x1CDEEE30)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_79_OFFSET UNITYSDK_OFFSET(0x1CDEEFA0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_7_OFFSET UNITYSDK_OFFSET(0x1CDE6C60)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_80_OFFSET UNITYSDK_OFFSET(0x1CDEF110)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_81_OFFSET UNITYSDK_OFFSET(0x1CDEF260)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_82_OFFSET UNITYSDK_OFFSET(0x1CDEF3C0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_83_OFFSET UNITYSDK_OFFSET(0x1CDEF510)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_84_OFFSET UNITYSDK_OFFSET(0x1CDEF790)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_85_OFFSET UNITYSDK_OFFSET(0x1CDEF9D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_86_OFFSET UNITYSDK_OFFSET(0x1CDEFBE0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_87_OFFSET UNITYSDK_OFFSET(0x1CDEFD60)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_88_OFFSET UNITYSDK_OFFSET(0x1CDEFEF0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_89_OFFSET UNITYSDK_OFFSET(0x1CDF0080)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_8_OFFSET UNITYSDK_OFFSET(0x1CDE6DA0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_90_OFFSET UNITYSDK_OFFSET(0x1CDF0250)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_91_OFFSET UNITYSDK_OFFSET(0x1CDF0410)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_92_OFFSET UNITYSDK_OFFSET(0x1CDF05D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_93_OFFSET UNITYSDK_OFFSET(0x1CDF0810)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_94_OFFSET UNITYSDK_OFFSET(0x1CDF09D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_95_OFFSET UNITYSDK_OFFSET(0x1CDF0C00)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_96_OFFSET UNITYSDK_OFFSET(0x1CDF0DE0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_97_OFFSET UNITYSDK_OFFSET(0x1CDF0FE0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_99_OFFSET UNITYSDK_OFFSET(0x1CDF11F0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_9_OFFSET UNITYSDK_OFFSET(0x1CDE6FB0)

namespace IFix
{
	inline static constexpr unsigned int ILFixDynamicMethodWrapper_2AE270867FEF5764_TypeDefinitionIndex = 35933;

	class ILFixDynamicMethodWrapper_2AE270867FEF5764 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::IFix::ILFixDynamicMethodWrapper*>** StaticGet_wrapperArray()
		{
			return (::Il2CppArray<::IFix::ILFixDynamicMethodWrapper*>**)Il2CppClass::FromTypeDefinitionIndex(ILFixDynamicMethodWrapper_2AE270867FEF5764_TypeDefinitionIndex)->GetStaticField(0x2B690);
		}
		::System::Object* anonObj; // 0x10
		::IFix::Core::VirtualMachine* virtualMachine; // 0x18
		::System::Int32 methodId; // 0x20

		::System::Void _ctor(::IFix::Core::VirtualMachine* virtualMachine, ::System::Int32 methodId, ::System::Object* anonObj)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__CTOR_OFFSET))(this, virtualMachine, methodId, anonObj);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__CCTOR_OFFSET))();
		}

		::Nap::NapECS::ArchetypeComponentAccessScopedLock _GW_0(::System::Object* P0, ::Nap::NapECS::ComponentMask P1, ::Nap::NapECS::ComponentMask P2, ::Nap::NapECS::ComponentMask P3)
		{
			return ((::Nap::NapECS::ArchetypeComponentAccessScopedLock(*)(::PVOID, ::System::Object*, ::Nap::NapECS::ComponentMask, ::Nap::NapECS::ComponentMask, ::Nap::NapECS::ComponentMask))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_0_OFFSET))(this, P0, P1, P2, P3);
		}

		::Nap::NapECS::ArchetypeComponentAccessScopedLock _GW_1(::Nap::NapECS::ArchetypeComponentAccessor& P0)
		{
			return ((::Nap::NapECS::ArchetypeComponentAccessScopedLock(*)(::PVOID, ::Nap::NapECS::ArchetypeComponentAccessor&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_1_OFFSET))(this, P0);
		}

		::System::Void _GW_2(::Nap::NapECS::ArchetypeComponentAccessScopedLock& P0)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::ArchetypeComponentAccessScopedLock&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_2_OFFSET))(this, P0);
		}

		::Nap::NapECS::ComponentMask _GW_3(::System::Object* P0)
		{
			return ((::Nap::NapECS::ComponentMask(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_3_OFFSET))(this, P0);
		}

		::System::Int32 _GW_4(::System::Object* P0)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_4_OFFSET))(this, P0);
		}

		::System::Void _GW_5(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_5_OFFSET))(this, P0, P1);
		}

		::System::Object* _GW_6(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_6_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_7(::System::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_7_OFFSET))(this, P0);
		}

		::Nap::NapECS::ComponentMask _GW_8(::System::Int32 P0)
		{
			return ((::Nap::NapECS::ComponentMask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_8_OFFSET))(this, P0);
		}

		::System::Boolean _GW_9(::Nap::NapECS::ComponentMask& P0, ::Nap::NapECS::ComponentMask P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::ComponentMask&, ::Nap::NapECS::ComponentMask))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_9_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_10(::Nap::NapECS::ComponentMask& P0, ::System::Object* P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::ComponentMask&, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_10_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_11(::Nap::NapECS::ComponentMask& P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_11_OFFSET))(this, P0);
		}

		::System::Object* _GW_12(::Nap::NapECS::ComponentMask& P0)
		{
			return ((::System::Object*(*)(::PVOID, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_12_OFFSET))(this, P0);
		}

		::System::Int32 _GW_13(::Nap::NapECS::ComponentMask& P0)
		{
			return ((::System::Int32(*)(::PVOID, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_13_OFFSET))(this, P0);
		}

		::System::Int32 _GW_14(::System::Span_1_9011FAD97750D224<::System::UInt16> P0, ::System::Int32 P1, ::System::UInt64 P2, ::System::Int32 P3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Span_1_9011FAD97750D224<::System::UInt16>, ::System::Int32, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_14_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Int32 _GW_15(::Nap::NapECS::ComponentMask& P0, ::System::Span_1_9011FAD97750D224<::System::UInt16> P1)
		{
			return ((::System::Int32(*)(::PVOID, ::Nap::NapECS::ComponentMask&, ::System::Span_1_9011FAD97750D224<::System::UInt16>))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_15_OFFSET))(this, P0, P1);
		}

		::Nap::NapECS::ComponentMask _GW_16(::Nap::NapECS::ComponentMask P0, ::Nap::NapECS::ComponentMask P1)
		{
			return ((::Nap::NapECS::ComponentMask(*)(::PVOID, ::Nap::NapECS::ComponentMask, ::Nap::NapECS::ComponentMask))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_16_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_17(::Nap::NapECS::ComponentMask P0, ::Nap::NapECS::ComponentMask P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::ComponentMask, ::Nap::NapECS::ComponentMask))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_17_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_18(::Nap::NapECS::ComponentMask& P0, ::Nap::NapECS::ComponentMask& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::ComponentMask&, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_18_OFFSET))(this, P0, P1);
		}

		::System::UInt32 _GW_19(::Nap::NapECS::ComponentMask& P0)
		{
			return ((::System::UInt32(*)(::PVOID, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_19_OFFSET))(this, P0);
		}

		::Nap::NapECS::ComponentMask _GW_20(::Nap::NapECS::ComponentMask P0)
		{
			return ((::Nap::NapECS::ComponentMask(*)(::PVOID, ::Nap::NapECS::ComponentMask))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_20_OFFSET))(this, P0);
		}

		::System::UInt32 _GW_21(::Nap::NapECS::ComponentMask& P0, ::System::Int32 P1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Nap::NapECS::ComponentMask&, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_21_OFFSET))(this, P0, P1);
		}

		::System::Object* _GW_22(::System::Object* P0)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_22_OFFSET))(this, P0);
		}

		::System::Object* _GW_23(::System::Object* P0, ::Nap::NapECS::ComponentMask& P1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_23_OFFSET))(this, P0, P1);
		}

		::System::Object* _GW_25(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_25_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_26(::System::Object* P0, ::Nap::NapECS::ComponentMask& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_26_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_27(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_27_OFFSET))(this, P0);
		}

		::System::Object* _GW_28(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_28_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_29(::System::Object* P0, ::System::Object* P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_29_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_30()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_30_OFFSET))(this);
		}

		::System::Void _GW_32(::System::Object* P0, ::System::Object* P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_32_OFFSET))(this, P0, P1, P2);
		}

		::System::Int32 _GW_33(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_33_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_34(::System::Byte& P0, ::System::Int32 P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_34_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_35(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_35_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_36(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_36_OFFSET))(this, P0, P1);
		}

		::System::Byte _GW_37(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_37_OFFSET))(this, P0, P1);
		}

		::System::Int32 _GW_38(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_38_OFFSET))(this, P0, P1);
		}

		::System::Byte _GW_39(::System::Boolean P0, ::System::Boolean P1, ::System::Int32 P2)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_39_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_40(::System::Object* P0, ::System::Object* P1, ::System::Object* P2, ::System::Object* P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_40_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Int32 _GW_41(::System::Int32 P0)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_41_OFFSET))(this, P0);
		}

		::Nap::NapECS::EcsWorldTypeMeta& _GW_42(::System::Int32 P0)
		{
			return ((::Nap::NapECS::EcsWorldTypeMeta&(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_42_OFFSET))(this, P0);
		}

		::Nap::NapECS::EcsComponentMetaInfo& _GW_43(::System::Int32 P0)
		{
			return ((::Nap::NapECS::EcsComponentMetaInfo&(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_43_OFFSET))(this, P0);
		}

		::System::Object* _GW_44(::System::Int32 P0)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_44_OFFSET))(this, P0);
		}

		::System::Void _GW_45(::System::Object* P0, ::Nap::NapECS::ComponentMask& P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_45_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_46(::System::Object* P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_46_OFFSET))(this, P0, P1, P2);
		}

		::System::Boolean _GW_47(::System::Object* P0, ::System::Object* P1, ::System::Int32& P2, ::System::Boolean P3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_47_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void _GW_48(::System::Object* P0, ::System::Int32 P1, ::System::Object* P2, ::System::Int32 P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_48_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean _GW_49(::System::Object* P0, ::System::Object* P1, ::System::Int32& P2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Int32&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_49_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_50(::Nap::NapECS::EcsArchetypeDataTransfer& P0)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsArchetypeDataTransfer&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_50_OFFSET))(this, P0);
		}

		::System::Boolean _GW_51(::Nap::NapECS::EcsCompFilter& P0, ::Nap::NapECS::ComponentMask& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsCompFilter&, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_51_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_52(::System::Object* P0, ::Nap::NapECS::ComponentMask& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_52_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_53(::Nap::NapECS::QueryMask& P0, ::Nap::NapECS::ComponentMask& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::QueryMask&, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_53_OFFSET))(this, P0, P1);
		}

		::System::UInt16 _GW_54(::System::Int32 P0)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_54_OFFSET))(this, P0);
		}

		::System::Object* _GW_55(::System::Object* P0, ::System::Int32 P1, ::System::Boolean P2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_55_OFFSET))(this, P0, P1, P2);
		}

		::System::Int32 _GW_56(::Nap::NapECS::EcsFilter* P0, ::Nap::NapECS::EcsFilter* P1)
		{
			return ((::System::Int32(*)(::PVOID, ::Nap::NapECS::EcsFilter*, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_56_OFFSET))(this, P0, P1);
		}

		::System::Object* _GW_57(::System::Object* P0, ::Nap::NapECS::ComponentMask& P1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_57_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_58(::Nap::NapECS::EcsCompFilter& P0, ::System::Int32 P1)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsCompFilter&, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_58_OFFSET))(this, P0, P1);
		}

		::System::UInt32 _GW_59(::System::Object* P0)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_59_OFFSET))(this, P0);
		}

		::System::Void _GW_60(::System::Object* P0, ::System::Boolean P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_60_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_61(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_61_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_62(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_62_OFFSET))(this, P0);
		}

		::System::Boolean _GW_63(::System::Int32 P0, ::System::Int32 P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_63_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_64(::Nap::NapECS::EcsDataCompScopeWriter& P0)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsDataCompScopeWriter&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_64_OFFSET))(this, P0);
		}

		::Nap::NapECS::EcsDataCompScopeWriter _GW_67(::System::Object* P0)
		{
			return ((::Nap::NapECS::EcsDataCompScopeWriter(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_67_OFFSET))(this, P0);
		}

		::System::Void _GW_68(::System::Object* P0, ::Nap::NapECS::ComponentMask& P1, ::System::Boolean P2, ::System::Boolean P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Nap::NapECS::ComponentMask&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_68_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean _GW_70(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_70_OFFSET))(this, P0, P1);
		}

		::System::Byte _GW_71(::System::Object* P0)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_71_OFFSET))(this, P0);
		}

		::System::Boolean _GW_72(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_72_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_73(::System::Object* P0, ::System::Object* P1, ::Nap::NapECS::ComponentMask& P2, ::System::Object* P3, ::System::Object* P4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::Nap::NapECS::ComponentMask&, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_73_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Object* _GW_76(::System::Object* P0, ::Nap::NapECS::QueryMask P1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Nap::NapECS::QueryMask))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_76_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_77(::System::Object* P0, ::System::UInt32& P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::UInt32&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_77_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_78(::System::Object* P0, ::System::Int32 P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_78_OFFSET))(this, P0, P1, P2);
		}

		::System::Boolean _GW_79(::System::Object* P0, ::System::Byte P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Byte))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_79_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_80(::System::Type* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_80_OFFSET))(this, P0);
		}

		::System::Void _GW_81(::System::Object* P0, ::System::Byte P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Byte))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_81_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_82(::Nap::NapECS::EcsComponent* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_82_OFFSET))(this, P0);
		}

		::System::Void _GW_83(::System::Object* P0, ::System::Int32 P1, ::Nap::NapECS::ComponentMask& P2, ::Nap::NapECS::ComponentMask& P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::Nap::NapECS::ComponentMask&, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_83_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void _GW_84(::Nap::NapECS::EcsWorld_EntityChangedMonitor& P0)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld_EntityChangedMonitor&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_84_OFFSET))(this, P0);
		}

		::System::Void _GW_85(::System::Object* P0, ::System::Object* P1, ::Nap::NapECS::ComponentMask& P2, ::System::Object* P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::Nap::NapECS::ComponentMask&, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_85_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void _GW_86(::System::Object* P0, ::System::Object* P1, ::System::Object* P2, ::System::Boolean P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_86_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean _GW_87(::System::Object* P0, ::System::Double& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Double&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_87_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_88(::System::Object* P0, ::System::Single& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Single&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_88_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_89(::System::Object* P0, ::System::Double& P1, ::System::Single& P2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Double&, ::System::Single&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_89_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_90(::System::Object* P0, ::Nap::NapECS::SyncTimeContext& P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Nap::NapECS::SyncTimeContext&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_90_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_91(::System::Object* P0, ::System::Single& P1, ::System::Single& P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_91_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_92(::Nap::NapECS::EcsWorld_EntityRemoveMonitor& P0)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld_EntityRemoveMonitor&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_92_OFFSET))(this, P0);
		}

		::System::Void _GW_93(::Nap::NapECS::ComponentMask P0, ::System::Object* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::ComponentMask, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_93_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_94(::System::Nullable_1<::Nap::NapECS::ComponentMask> P0, ::System::Nullable_1<::Nap::NapECS::ComponentMask> P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Nap::NapECS::ComponentMask>, ::System::Nullable_1<::Nap::NapECS::ComponentMask>, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_94_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_95(::System::Object* P0, ::Nap::NapECS::ComponentMask& P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_95_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_96(::System::Object* P0, ::Nap::NapECS::ComponentMask& P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Nap::NapECS::ComponentMask&, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_96_OFFSET))(this, P0, P1, P2);
		}

		::System::Boolean _GW_97(::System::Object* P0, ::Nap::NapECS::ComponentMask& P1, ::System::Int32 P2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::Nap::NapECS::ComponentMask&, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_97_OFFSET))(this, P0, P1, P2);
		}

		::System::Boolean _GW_99(::System::Object* P0, ::Nap::NapECS::SyncTimestamp& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::Nap::NapECS::SyncTimestamp&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_99_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_100(::System::Object* P0, ::Nap::NapECS::SyncTimestamp& P1, ::Nap::NapECS::SyncTimestamp& P2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::Nap::NapECS::SyncTimestamp&, ::Nap::NapECS::SyncTimestamp&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_100_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_101(::System::Object* P0, ::System::Int32 P1, ::Nap::NapECS::ComponentMask& P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_101_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_102(::Nap::NapECS::EcsWorld_EntityAddMonitor& P0)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld_EntityAddMonitor&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_102_OFFSET))(this, P0);
		}

		::System::Boolean _GW_103(::Nap::NapECS::EcsWorld_EntityComponentMaskMap_ComponentMaskPredicateAlwaysTrue& P0, ::Nap::NapECS::ComponentMask& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsWorld_EntityComponentMaskMap_ComponentMaskPredicateAlwaysTrue&, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_103_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_104(::Nap::NapECS::EcsWorld_EntityComponentMaskMap_ComponentMaskPredicatePassFilter& P0, ::Nap::NapECS::ComponentMask& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsWorld_EntityComponentMaskMap_ComponentMaskPredicatePassFilter&, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_104_OFFSET))(this, P0, P1);
		}

		::System::Object* _GW_105()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_105_OFFSET))(this);
		}

		::System::Void _GW_106(::System::Object* P0, ::System::Int32 P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_106_OFFSET))(this, P0, P1, P2);
		}

		::System::Object* _GW_107(::Nap::NapECS::EcsWorld*& P0)
		{
			return ((::System::Object*(*)(::PVOID, ::Nap::NapECS::EcsWorld*&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_107_OFFSET))(this, P0);
		}

		::System::Boolean _GW_110(::Nap::NapECS::QueryMask& P0, ::Nap::NapECS::QueryMask P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::QueryMask&, ::Nap::NapECS::QueryMask))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_110_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_111(::Nap::NapECS::QueryMask& P0, ::System::Object* P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::QueryMask&, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_111_OFFSET))(this, P0, P1);
		}

		::System::Int32 _GW_112(::Nap::NapECS::QueryMask& P0)
		{
			return ((::System::Int32(*)(::PVOID, ::Nap::NapECS::QueryMask&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_112_OFFSET))(this, P0);
		}

		::Nap::NapECS::QueryMask _GW_114(::System::Object* P0)
		{
			return ((::Nap::NapECS::QueryMask(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_114_OFFSET))(this, P0);
		}

		::System::Double _GW_117(::ProfilingRecorder::SystemTimeRecorder_SystemTimeEntry& P0)
		{
			return ((::System::Double(*)(::PVOID, ::ProfilingRecorder::SystemTimeRecorder_SystemTimeEntry&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_117_OFFSET))(this, P0);
		}

		::ProfilingRecorder::SystemTimeRecorder_SystemTimeDelta _GW_118(::System::Object* P0)
		{
			return ((::ProfilingRecorder::SystemTimeRecorder_SystemTimeDelta(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_118_OFFSET))(this, P0);
		}

		::System::Int32 _GW_119(::ProfilingRecorder::SystemTimeRecorder_SystemTimeEntry P0, ::ProfilingRecorder::SystemTimeRecorder_SystemTimeEntry P1)
		{
			return ((::System::Int32(*)(::PVOID, ::ProfilingRecorder::SystemTimeRecorder_SystemTimeEntry, ::ProfilingRecorder::SystemTimeRecorder_SystemTimeEntry))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_119_OFFSET))(this, P0, P1);
		}

		::System::Object* _GW_125(::ProfilingRecorder::SystemTimeRecorder_SystemAverageEntry& P0)
		{
			return ((::System::Object*(*)(::PVOID, ::ProfilingRecorder::SystemTimeRecorder_SystemAverageEntry&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_125_OFFSET))(this, P0);
		}

		::System::Object* _GW_126(::ProfilingRecorder::SystemTimeRecorder_SystemTimeDelta& P0)
		{
			return ((::System::Object*(*)(::PVOID, ::ProfilingRecorder::SystemTimeRecorder_SystemTimeDelta&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_126_OFFSET))(this, P0);
		}

		::System::Object* _GW_127(::ProfilingRecorder::SystemTimeRecorder_SystemTimeEntry& P0)
		{
			return ((::System::Object*(*)(::PVOID, ::ProfilingRecorder::SystemTimeRecorder_SystemTimeEntry&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_127_OFFSET))(this, P0);
		}

		::System::Object* _GW_128(::ProfilingRecorder::SystemTimeRecorder_SystemTimeSnapshot& P0)
		{
			return ((::System::Object*(*)(::PVOID, ::ProfilingRecorder::SystemTimeRecorder_SystemTimeSnapshot&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_128_OFFSET))(this, P0);
		}

		::System::Void _GW_129(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_2AE270867FEF5764__GW_129_OFFSET))(this, P0);
		}
	};
}
