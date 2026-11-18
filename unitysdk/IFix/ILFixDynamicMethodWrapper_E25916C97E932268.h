#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Services/SubTaskStatusInfo.h"
#include "unitysdk/BehaviorDesigner/Runtime/BehaviorManager_BehaviorSerializeRequestHandle.h"
#include "unitysdk/BehaviorDesigner/Runtime/IDToTaskWrapper.h"
#include "unitysdk/BehaviorDesigner/Runtime/TaskFieldAssigner.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace BehaviorDesigner::Runtime { class Behavior; }
namespace BehaviorDesigner::Runtime { class BehaviorManager_BehaviorTree; }
namespace BehaviorDesigner::Runtime { class BehaviorSource; }
namespace BehaviorDesigner::Runtime::Tasks { class Task; }
namespace IFix { class ILFixDynamicMethodWrapper; }
namespace IFix::Core { class VirtualMachine; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class FieldInfo; }
namespace UnityEngine { class Component; }

#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0A2C00)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0924F0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_0_OFFSET UNITYSDK_OFFSET(0x1F092500)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_100_OFFSET UNITYSDK_OFFSET(0x1F09DC70)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_101_OFFSET UNITYSDK_OFFSET(0x1F09DE00)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_102_OFFSET UNITYSDK_OFFSET(0x1F09E040)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_103_OFFSET UNITYSDK_OFFSET(0x1F09E230)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_104_OFFSET UNITYSDK_OFFSET(0x1F09E430)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_105_OFFSET UNITYSDK_OFFSET(0x1F09E640)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_106_OFFSET UNITYSDK_OFFSET(0x1F09E850)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_107_OFFSET UNITYSDK_OFFSET(0x1F09EA50)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_108_OFFSET UNITYSDK_OFFSET(0x1F09EC50)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_109_OFFSET UNITYSDK_OFFSET(0x1F09EE60)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_10_OFFSET UNITYSDK_OFFSET(0x1F093290)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_110_OFFSET UNITYSDK_OFFSET(0x1F09F070)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_111_OFFSET UNITYSDK_OFFSET(0x1F09F280)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_112_OFFSET UNITYSDK_OFFSET(0x1F09F490)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_113_OFFSET UNITYSDK_OFFSET(0x1F09F6A0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_114_OFFSET UNITYSDK_OFFSET(0x1F09F8B0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_115_OFFSET UNITYSDK_OFFSET(0x1F09FAC0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_116_OFFSET UNITYSDK_OFFSET(0x1F09FC10)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_117_OFFSET UNITYSDK_OFFSET(0x1F09FE70)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_118_OFFSET UNITYSDK_OFFSET(0x1F09FFB0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_119_OFFSET UNITYSDK_OFFSET(0x1F0A0130)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_11_OFFSET UNITYSDK_OFFSET(0x1F0933E0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_120_OFFSET UNITYSDK_OFFSET(0x1F0A03D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_121_OFFSET UNITYSDK_OFFSET(0x1F0A05E0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_122_OFFSET UNITYSDK_OFFSET(0x1F0A0800)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_123_OFFSET UNITYSDK_OFFSET(0x1F0A0970)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_124_OFFSET UNITYSDK_OFFSET(0x1F0A0B70)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_125_OFFSET UNITYSDK_OFFSET(0x1F0A0CE0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_126_OFFSET UNITYSDK_OFFSET(0x1F0A0EE0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_127_OFFSET UNITYSDK_OFFSET(0x1F0A1050)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_128_OFFSET UNITYSDK_OFFSET(0x1F0A1250)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_129_OFFSET UNITYSDK_OFFSET(0x1F0A1430)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_12_OFFSET UNITYSDK_OFFSET(0x1F093570)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_130_OFFSET UNITYSDK_OFFSET(0x1F0A1630)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_131_OFFSET UNITYSDK_OFFSET(0x1F0A17A0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_132_OFFSET UNITYSDK_OFFSET(0x1F0A1910)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_133_OFFSET UNITYSDK_OFFSET(0x1F0A1A80)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_134_OFFSET UNITYSDK_OFFSET(0x1F0A1C50)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_135_OFFSET UNITYSDK_OFFSET(0x1F0A1E20)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_136_OFFSET UNITYSDK_OFFSET(0x1F0A2010)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_137_OFFSET UNITYSDK_OFFSET(0x1F0A2200)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_138_OFFSET UNITYSDK_OFFSET(0x1F0A23E0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_139_OFFSET UNITYSDK_OFFSET(0x1F0A26D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_13_OFFSET UNITYSDK_OFFSET(0x1F0937B0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_140_OFFSET UNITYSDK_OFFSET(0x1F0A2900)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_141_OFFSET UNITYSDK_OFFSET(0x1F0A2A90)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_14_OFFSET UNITYSDK_OFFSET(0x1F093990)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_15_OFFSET UNITYSDK_OFFSET(0x1F093B00)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_16_OFFSET UNITYSDK_OFFSET(0x1F093D00)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_17_OFFSET UNITYSDK_OFFSET(0x1F093E70)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_18_OFFSET UNITYSDK_OFFSET(0x1F093FF0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_19_OFFSET UNITYSDK_OFFSET(0x1F094220)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_1_OFFSET UNITYSDK_OFFSET(0x1F092650)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_20_OFFSET UNITYSDK_OFFSET(0x1F094390)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_21_OFFSET UNITYSDK_OFFSET(0x1F0945E0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_22_OFFSET UNITYSDK_OFFSET(0x1F094870)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_23_OFFSET UNITYSDK_OFFSET(0x1F0949E0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_24_OFFSET UNITYSDK_OFFSET(0x1F094B80)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_25_OFFSET UNITYSDK_OFFSET(0x1F094E20)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_26_OFFSET UNITYSDK_OFFSET(0x1F0950A0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_27_OFFSET UNITYSDK_OFFSET(0x1F095200)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_28_OFFSET UNITYSDK_OFFSET(0x1F095430)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_29_OFFSET UNITYSDK_OFFSET(0x1F095640)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_2_OFFSET UNITYSDK_OFFSET(0x1F089A40)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_30_OFFSET UNITYSDK_OFFSET(0x1F095940)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_31_OFFSET UNITYSDK_OFFSET(0x1F095C00)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_32_OFFSET UNITYSDK_OFFSET(0x1F095D70)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_33_OFFSET UNITYSDK_OFFSET(0x1F096040)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_34_OFFSET UNITYSDK_OFFSET(0x1F0961D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_35_OFFSET UNITYSDK_OFFSET(0x1F096380)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_36_OFFSET UNITYSDK_OFFSET(0x1F0964C0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_37_OFFSET UNITYSDK_OFFSET(0x1F0965F0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_38_OFFSET UNITYSDK_OFFSET(0x1F096840)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_39_OFFSET UNITYSDK_OFFSET(0x1F0969B0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_3_OFFSET UNITYSDK_OFFSET(0x1F08AAB0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_40_OFFSET UNITYSDK_OFFSET(0x1F096B40)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_41_OFFSET UNITYSDK_OFFSET(0x1F096D60)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_42_OFFSET UNITYSDK_OFFSET(0x1F096F90)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_43_OFFSET UNITYSDK_OFFSET(0x1F097120)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_44_OFFSET UNITYSDK_OFFSET(0x1F097340)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_45_OFFSET UNITYSDK_OFFSET(0x1F097580)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_46_OFFSET UNITYSDK_OFFSET(0x1F097740)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_47_OFFSET UNITYSDK_OFFSET(0x1F0978A0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_48_OFFSET UNITYSDK_OFFSET(0x1F097A20)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_49_OFFSET UNITYSDK_OFFSET(0x1F097BC0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_4_OFFSET UNITYSDK_OFFSET(0x1F0927B0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_50_OFFSET UNITYSDK_OFFSET(0x1F097D60)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_51_OFFSET UNITYSDK_OFFSET(0x1F097F90)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_52_OFFSET UNITYSDK_OFFSET(0x1F098120)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_53_OFFSET UNITYSDK_OFFSET(0x1F098380)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_54_OFFSET UNITYSDK_OFFSET(0x1F098500)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_55_OFFSET UNITYSDK_OFFSET(0x1F0986A0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_56_OFFSET UNITYSDK_OFFSET(0x1F098820)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_57_OFFSET UNITYSDK_OFFSET(0x1F098A00)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_58_OFFSET UNITYSDK_OFFSET(0x1F098C10)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_59_OFFSET UNITYSDK_OFFSET(0x1F098DD0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_5_OFFSET UNITYSDK_OFFSET(0x1F092910)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_60_OFFSET UNITYSDK_OFFSET(0x1F098FD0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_61_OFFSET UNITYSDK_OFFSET(0x1F099110)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_62_OFFSET UNITYSDK_OFFSET(0x1F0992A0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_63_OFFSET UNITYSDK_OFFSET(0x1F099410)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_64_OFFSET UNITYSDK_OFFSET(0x1F0996E0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_65_OFFSET UNITYSDK_OFFSET(0x1F099940)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_66_OFFSET UNITYSDK_OFFSET(0x1F099C20)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_67_OFFSET UNITYSDK_OFFSET(0x1F099D80)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_68_OFFSET UNITYSDK_OFFSET(0x1F09A200)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_69_OFFSET UNITYSDK_OFFSET(0x1F09A380)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_6_OFFSET UNITYSDK_OFFSET(0x1F092B00)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_70_OFFSET UNITYSDK_OFFSET(0x1F09A600)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_71_OFFSET UNITYSDK_OFFSET(0x1F09A7E0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_72_OFFSET UNITYSDK_OFFSET(0x1F09A9B0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_73_OFFSET UNITYSDK_OFFSET(0x1F09AB70)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_74_OFFSET UNITYSDK_OFFSET(0x1F09AD50)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_75_OFFSET UNITYSDK_OFFSET(0x1F09AF00)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_76_OFFSET UNITYSDK_OFFSET(0x1F09B0B0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_77_OFFSET UNITYSDK_OFFSET(0x1F09B270)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_78_OFFSET UNITYSDK_OFFSET(0x1F09B430)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_79_OFFSET UNITYSDK_OFFSET(0x1F09B5F0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_7_OFFSET UNITYSDK_OFFSET(0x1F092D10)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_80_OFFSET UNITYSDK_OFFSET(0x1F09B7D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_81_OFFSET UNITYSDK_OFFSET(0x1F09BA20)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_82_OFFSET UNITYSDK_OFFSET(0x1F09BBA0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_83_OFFSET UNITYSDK_OFFSET(0x1F09BD20)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_84_OFFSET UNITYSDK_OFFSET(0x1F09BF60)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_85_OFFSET UNITYSDK_OFFSET(0x1F09C0D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_86_OFFSET UNITYSDK_OFFSET(0x1F09C2F0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_87_OFFSET UNITYSDK_OFFSET(0x1F09C470)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_88_OFFSET UNITYSDK_OFFSET(0x1F09C680)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_89_OFFSET UNITYSDK_OFFSET(0x1F09C800)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_8_OFFSET UNITYSDK_OFFSET(0x1F092E70)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_90_OFFSET UNITYSDK_OFFSET(0x1F09CA10)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_91_OFFSET UNITYSDK_OFFSET(0x1F09CC00)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_92_OFFSET UNITYSDK_OFFSET(0x1F09CE20)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_93_OFFSET UNITYSDK_OFFSET(0x1F09CFA0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_94_OFFSET UNITYSDK_OFFSET(0x1F09D120)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_95_OFFSET UNITYSDK_OFFSET(0x1F09D2A0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_96_OFFSET UNITYSDK_OFFSET(0x1F09D490)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_97_OFFSET UNITYSDK_OFFSET(0x1F09D680)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_98_OFFSET UNITYSDK_OFFSET(0x1F09D880)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_99_OFFSET UNITYSDK_OFFSET(0x1F09DA80)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_9_OFFSET UNITYSDK_OFFSET(0x1F093070)

namespace IFix
{
	inline static constexpr unsigned int ILFixDynamicMethodWrapper_E25916C97E932268_TypeDefinitionIndex = 34036;

	class ILFixDynamicMethodWrapper_E25916C97E932268 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::IFix::ILFixDynamicMethodWrapper*>** StaticGet_wrapperArray()
		{
			return (::Il2CppArray<::IFix::ILFixDynamicMethodWrapper*>**)Il2CppClass::FromTypeDefinitionIndex(ILFixDynamicMethodWrapper_E25916C97E932268_TypeDefinitionIndex)->GetStaticField(0x29FD0);
		}
		::IFix::Core::VirtualMachine* virtualMachine; // 0x10
		::System::Object* anonObj; // 0x18
		::System::Int32 methodId; // 0x20

		::System::Void _ctor(::IFix::Core::VirtualMachine* virtualMachine, ::System::Int32 methodId, ::System::Object* anonObj)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__CTOR_OFFSET))(this, virtualMachine, methodId, anonObj);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__CCTOR_OFFSET))();
		}

		::System::Boolean _GW_0(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_0_OFFSET))(this, P0);
		}

		::System::Boolean _GW_1(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_1_OFFSET))(this, P0, P1);
		}

		::System::Int32 _GW_2(::System::Object* P0)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_2_OFFSET))(this, P0);
		}

		::System::Void _GW_3(::System::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_3_OFFSET))(this, P0);
		}

		::System::Boolean _GW_4(::System::Int32 P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_4_OFFSET))(this, P0);
		}

		::System::Object* _GW_5(::System::Object* P0)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_5_OFFSET))(this, P0);
		}

		::System::Object* _GW_6(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_6_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_7(::System::Object* P0, ::System::Object* P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_7_OFFSET))(this, P0, P1, P2);
		}

		::System::Object* _GW_8(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_8_OFFSET))(this, P0, P1);
		}

		::System::Object* _GW_9(::System::Int32 P0, ::System::Object* P1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_9_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_10(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_10_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_11(::System::Object* P0, ::System::Object* P1, ::System::Object* P2, ::System::Object* P3, ::System::Object* P4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_11_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Object* _GW_12(::System::Object* P0, ::System::Object* P1, ::System::Boolean P2, ::System::Object* P3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_12_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Object* _GW_13()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_13_OFFSET))(this);
		}

		::System::Int32 _GW_14(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_14_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_15(::System::Object* P0, ::System::Object* P1, ::System::Object* P2, ::System::Int32 P3, ::System::Boolean P4, ::System::Int32& P5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Int32, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_15_OFFSET))(this, P0, P1, P2, P3, P4, P5);
		}

		::System::Int32 _GW_16(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_16_OFFSET))(this, P0, P1);
		}

		::System::UInt32 _GW_17(::System::Object* P0, ::System::Int32 P1, ::System::Int32 P2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_17_OFFSET))(this, P0, P1, P2);
		}

		::System::Object* _GW_18(::System::Object* P0, ::System::Int32 P1, ::System::Int32 P2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_18_OFFSET))(this, P0, P1, P2);
		}

		::System::Boolean _GW_19(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_19_OFFSET))(this, P0, P1);
		}

		::System::Object* _GW_20(::System::Object* P0, ::System::Boolean P1, ::System::Int32 P2, ::System::Object* P3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_20_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Object* _GW_21(::System::Object* P0, ::System::Object* P1, ::System::Object* P2, ::System::Object* P3, ::System::Int32 P4, ::System::Object* P5, ::System::Object* P6, ::System::Object* P7)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Int32, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_21_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6, P7);
		}

		::System::Void _GW_22(::System::Object* P0, ::System::Object* P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_22_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_23(::System::Object* P0, ::System::Object* P1, ::System::Object* P2, ::System::Int32 P3, ::System::Object* P4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_23_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Object* _GW_24(::System::Object* P0, ::System::Object* P1, ::System::Object* P2, ::System::Int32 P3, ::System::Object* P4, ::System::Boolean P5, ::System::Int32 P6)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Int32, ::System::Object*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_24_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6);
		}

		::System::Object* _GW_25(::System::Boolean P0, ::System::Int32 P1, ::System::Object* P2, ::System::Object* P3, ::System::Int32 P4)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Object*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_25_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void _GW_26(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_26_OFFSET))(this, P0, P1);
		}

		::System::Object* _GW_27(::System::Object* P0, ::System::Boolean P1, ::System::Object* P2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_27_OFFSET))(this, P0, P1, P2);
		}

		::System::Object* _GW_28(::System::Object* P0, ::System::Object* P1, ::System::Object* P2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_28_OFFSET))(this, P0, P1, P2);
		}

		::System::Object* _GW_29(::BehaviorDesigner::Runtime::IDToTaskWrapper& P0, ::System::Int32 P1)
		{
			return ((::System::Object*(*)(::PVOID, ::BehaviorDesigner::Runtime::IDToTaskWrapper&, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_29_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_30(::BehaviorDesigner::Runtime::TaskFieldAssigner& P0, ::BehaviorDesigner::Runtime::IDToTaskWrapper P1)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::TaskFieldAssigner&, ::BehaviorDesigner::Runtime::IDToTaskWrapper))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_30_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_31(::System::Object* P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_31_OFFSET))(this, P0, P1, P2);
		}

		::System::Object* _GW_32(::System::Object* P0, ::System::Object* P1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::BehaviorDesigner::Runtime::Tasks::Task*>*& P2, ::System::Object* P3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::BehaviorDesigner::Runtime::Tasks::Task*>*&, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_32_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean _GW_33(::System::Object* P0, ::System::Boolean P1, ::System::Object* P2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_33_OFFSET))(this, P0, P1, P2);
		}

		::System::Boolean _GW_34(::System::Object* P0, ::System::Object* P1, ::System::Boolean P2, ::System::Boolean P3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_34_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void _GW_35(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* P0)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_35_OFFSET))(this, P0);
		}

		::System::Void _GW_36()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_36_OFFSET))(this);
		}

		::System::Void _GW_37(::System::Object* P0, ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*& P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*&, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_37_OFFSET))(this, P0, P1, P2);
		}

		::System::Boolean _GW_38(::System::Object* P0, ::System::Object* P1, ::System::Object* P2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_38_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_39(::System::Object* P0, ::System::Object* P1, ::System::Int32 P2, ::System::Int32 P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_39_OFFSET))(this, P0, P1, P2, P3);
		}

		::BehaviorDesigner::Runtime::BehaviorManager_BehaviorSerializeRequestHandle _GW_40(::System::Object* P0, ::System::Int32 P1, ::System::Object* P2, ::System::Object* P3)
		{
			return ((::BehaviorDesigner::Runtime::BehaviorManager_BehaviorSerializeRequestHandle(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_40_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Object* _GW_41(::System::Object* P0, ::System::Object* P1, ::System::Object* P2, ::System::Object* P3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_41_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void _GW_42(::System::Object* P0, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorSerializeRequestHandle P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorSerializeRequestHandle))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_42_OFFSET))(this, P0, P1);
		}

		::System::Int32 _GW_43(::System::Object* P0, ::System::Object* P1, ::System::Object* P2, ::System::Object* P3, ::System::Boolean& P4, ::System::Object* P5, ::System::Object* P6)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Boolean&, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_43_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6);
		}

		::System::Object* _GW_44(::System::Object* P0, ::System::Object* P1, ::System::Object* P2, ::System::Object* P3, ::System::Object* P4)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_44_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void _GW_45(::System::Object* P0, ::System::Int32 P1, ::System::Int32 P2, ::System::Int32 P3, ::System::Int32 P4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_45_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void _GW_46(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_46_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_47(::System::Object* P0, ::System::Int32 P1, ::System::Int32 P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_47_OFFSET))(this, P0, P1, P2);
		}

		::System::Int32 _GW_48(::System::Object* P0, ::System::Object* P1, ::System::Int32 P2, ::System::Int32 P3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_48_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean _GW_49(::System::Object* P0, ::System::Object* P1, ::System::Int32 P2, ::System::Int32 P3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_49_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void _GW_50(::System::Object* P0, ::System::Object* P1, ::System::Int32 P2, ::System::Int32 P3, ::BehaviorDesigner::Runtime::Tasks::TaskStatus& P4, ::System::Boolean P5, ::System::Boolean P6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Int32, ::System::Int32, ::BehaviorDesigner::Runtime::Tasks::TaskStatus&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_50_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6);
		}

		::System::Void _GW_51(::System::Object* P0, ::System::Object* P1, ::System::Boolean P2, ::System::Int32 P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_51_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void _GW_52(::System::Object* P0, ::System::Object* P1, ::System::Object* P2, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*& P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_52_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean _GW_53(::System::Object* P0, ::System::Object* P1, ::System::Int32 P2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_53_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_54(::System::Object* P0, ::System::Object* P1, ::System::Object* P2, ::System::Object* P3, ::System::Int32 P4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_54_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void _GW_55(::System::Object* P0, ::System::Object* P1, ::System::Object* P2, ::System::Int32 P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_55_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Decimal _GW_56(::System::Object* P0)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_56_OFFSET))(this, P0);
		}

		::System::Void _GW_57(::System::Object* P0, ::System::Object* P1, ::System::Int32 P2, ::System::Int32 P3, ::BehaviorDesigner::Runtime::Tasks::TaskStatus& P4, ::System::Boolean P5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Int32, ::System::Int32, ::BehaviorDesigner::Runtime::Tasks::TaskStatus&, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_57_OFFSET))(this, P0, P1, P2, P3, P4, P5);
		}

		::System::Int32 _GW_58(::System::Object* P0, ::System::Object* P1, ::System::Int32 P2, ::System::Int32 P3, ::System::Int32 P4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_58_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Int32 _GW_59(::System::Object* P0, ::System::Object* P1, ::System::Int32 P2, ::System::Int32& P3, ::System::Int32 P4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Int32, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_59_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Single _GW_60()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_60_OFFSET))(this);
		}

		::System::Boolean _GW_61(::System::Object* P0, ::System::Object* P1, ::System::Object* P2, ::System::Int32 P3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_61_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void _GW_62(::System::Object* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_62_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_63(::System::Object* P0, ::System::Object* P1, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*& P2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree*&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_63_OFFSET))(this, P0, P1, P2);
		}

		::System::Boolean _GW_64(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorSerializeRequestHandle& P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorSerializeRequestHandle&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_64_OFFSET))(this, P0);
		}

		::System::Object* _GW_65(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorSerializeRequestHandle& P0)
		{
			return ((::System::Object*(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorSerializeRequestHandle&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_65_OFFSET))(this, P0);
		}

		::System::Int32 _GW_66(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_66_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_67(::System::Object* P0, ::BehaviorDesigner::Runtime::Tasks::Task*& P1, ::BehaviorDesigner::Runtime::Tasks::Task*& P2, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*& P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::BehaviorDesigner::Runtime::Tasks::Task*&, ::BehaviorDesigner::Runtime::Tasks::Task*&, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_67_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void _GW_68(::System::Object* P0, ::System::Object* P1, ::System::Object* P2, ::System::Object* P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_68_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void _GW_69(::BehaviorDesigner::Runtime::IDToTaskWrapper& P0, ::System::Int32 P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::IDToTaskWrapper&, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_69_OFFSET))(this, P0, P1, P2);
		}

		::UnityEngine::Color _GW_70(::System::Object* P0)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_70_OFFSET))(this, P0);
		}

		::UnityEngine::Matrix4x4 _GW_71(::System::Object* P0)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_71_OFFSET))(this, P0);
		}

		::UnityEngine::Quaternion _GW_72(::System::Object* P0)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_72_OFFSET))(this, P0);
		}

		::UnityEngine::Rect _GW_73(::System::Object* P0)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_73_OFFSET))(this, P0);
		}

		::UnityEngine::Vector2 _GW_74(::System::Object* P0)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_74_OFFSET))(this, P0);
		}

		::UnityEngine::Vector2Int _GW_75(::System::Object* P0)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_75_OFFSET))(this, P0);
		}

		::UnityEngine::Vector3 _GW_76(::System::Object* P0)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_76_OFFSET))(this, P0);
		}

		::UnityEngine::Vector3Int _GW_77(::System::Object* P0)
		{
			return ((::UnityEngine::Vector3Int(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_77_OFFSET))(this, P0);
		}

		::UnityEngine::Vector4 _GW_78(::System::Object* P0)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_78_OFFSET))(this, P0);
		}

		::UnityEngine::LayerMask _GW_79(::System::Int32 P0)
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_79_OFFSET))(this, P0);
		}

		::System::Object* _GW_80(::System::Object* P0, ::System::Object* P1, ::System::Object* P2, ::System::Boolean P3, ::System::Object* P4)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_80_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Int32 _GW_81(::System::Object* P0, ::System::Int32 P1, ::System::Object* P2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_81_OFFSET))(this, P0, P1, P2);
		}

		::System::Single _GW_82(::System::Object* P0, ::System::Int32 P1, ::System::Object* P2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_82_OFFSET))(this, P0, P1, P2);
		}

		::System::Object* _GW_83(::System::Object* P0, ::System::Int32 P1, ::System::Int32 P2, ::System::Object* P3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_83_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Byte _GW_84(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_84_OFFSET))(this, P0, P1);
		}

		::UnityEngine::Color _GW_85(::System::Object* P0, ::System::Int32 P1, ::System::Object* P2)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_85_OFFSET))(this, P0, P1, P2);
		}

		::System::Double _GW_86(::System::Object* P0, ::System::Int32 P1, ::System::Object* P2)
		{
			return ((::System::Double(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_86_OFFSET))(this, P0, P1, P2);
		}

		::UnityEngine::LayerMask _GW_87(::System::Object* P0, ::System::Int32 P1, ::System::Object* P2)
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_87_OFFSET))(this, P0, P1, P2);
		}

		::System::Int64 _GW_88(::System::Object* P0, ::System::Int32 P1, ::System::Object* P2)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_88_OFFSET))(this, P0, P1, P2);
		}

		::UnityEngine::Matrix4x4 _GW_89(::System::Object* P0, ::System::Int32 P1, ::System::Object* P2)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_89_OFFSET))(this, P0, P1, P2);
		}

		::UnityEngine::Quaternion _GW_90(::System::Object* P0, ::System::Int32 P1, ::System::Object* P2)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_90_OFFSET))(this, P0, P1, P2);
		}

		::UnityEngine::Rect _GW_91(::System::Object* P0, ::System::Int32 P1, ::System::Object* P2)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_91_OFFSET))(this, P0, P1, P2);
		}

		::System::UInt32 _GW_92(::System::Object* P0, ::System::Int32 P1, ::System::Object* P2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_92_OFFSET))(this, P0, P1, P2);
		}

		::System::UInt64 _GW_93(::System::Object* P0, ::System::Int32 P1, ::System::Object* P2)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_93_OFFSET))(this, P0, P1, P2);
		}

		::System::UInt16 _GW_94(::System::Object* P0, ::System::Int32 P1, ::System::Object* P2)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_94_OFFSET))(this, P0, P1, P2);
		}

		::UnityEngine::Vector2 _GW_95(::System::Object* P0, ::System::Int32 P1, ::System::Object* P2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_95_OFFSET))(this, P0, P1, P2);
		}

		::UnityEngine::Vector2Int _GW_96(::System::Object* P0, ::System::Int32 P1, ::System::Object* P2)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_96_OFFSET))(this, P0, P1, P2);
		}

		::UnityEngine::Vector3 _GW_97(::System::Object* P0, ::System::Int32 P1, ::System::Object* P2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_97_OFFSET))(this, P0, P1, P2);
		}

		::UnityEngine::Vector3Int _GW_98(::System::Object* P0, ::System::Int32 P1, ::System::Object* P2)
		{
			return ((::UnityEngine::Vector3Int(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_98_OFFSET))(this, P0, P1, P2);
		}

		::UnityEngine::Vector4 _GW_99(::System::Object* P0, ::System::Int32 P1, ::System::Object* P2)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_99_OFFSET))(this, P0, P1, P2);
		}

		::System::Int32 _GW_100(::System::Object* P0, ::System::Boolean P1, ::System::Object* P2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_100_OFFSET))(this, P0, P1, P2);
		}

		::System::Boolean _GW_101(::System::Int32 P0, ::System::Object* P1, ::System::Object* P2, ::System::Object* P3, ::System::Int32& P4, ::System::Int32& P5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_101_OFFSET))(this, P0, P1, P2, P3, P4, P5);
		}

		::System::Boolean _GW_102(::System::Int32 P0, ::System::Object* P1, ::System::Object* P2, ::System::Object* P3, ::System::Int32& P4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Int32&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_102_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Object* _GW_103(::System::Boolean P0)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_103_OFFSET))(this, P0);
		}

		::System::Object* _GW_104(::UnityEngine::Color P0)
		{
			return ((::System::Object*(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_104_OFFSET))(this, P0);
		}

		::System::Object* _GW_105(::System::Single P0)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_105_OFFSET))(this, P0);
		}

		::System::Object* _GW_106(::System::Int32 P0)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_106_OFFSET))(this, P0);
		}

		::System::Object* _GW_107(::UnityEngine::LayerMask P0)
		{
			return ((::System::Object*(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_107_OFFSET))(this, P0);
		}

		::System::Object* _GW_108(::UnityEngine::Quaternion P0)
		{
			return ((::System::Object*(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_108_OFFSET))(this, P0);
		}

		::System::Object* _GW_109(::UnityEngine::Rect P0)
		{
			return ((::System::Object*(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_109_OFFSET))(this, P0);
		}

		::System::Object* _GW_110(::UnityEngine::Vector2 P0)
		{
			return ((::System::Object*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_110_OFFSET))(this, P0);
		}

		::System::Object* _GW_111(::UnityEngine::Vector2Int P0)
		{
			return ((::System::Object*(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_111_OFFSET))(this, P0);
		}

		::System::Object* _GW_112(::UnityEngine::Vector3 P0)
		{
			return ((::System::Object*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_112_OFFSET))(this, P0);
		}

		::System::Object* _GW_113(::UnityEngine::Vector3Int P0)
		{
			return ((::System::Object*(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_113_OFFSET))(this, P0);
		}

		::System::Object* _GW_114(::UnityEngine::Vector4 P0)
		{
			return ((::System::Object*(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_114_OFFSET))(this, P0);
		}

		::System::Single _GW_115(::System::Object* P0)
		{
			return ((::System::Single(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_115_OFFSET))(this, P0);
		}

		::System::Void _GW_116(::System::Object* P0, ::BehaviorDesigner::Runtime::Tasks::Services::SubTaskStatusInfo& P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::BehaviorDesigner::Runtime::Tasks::Services::SubTaskStatusInfo&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_116_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_117(::BehaviorDesigner::Runtime::Behavior* P0)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_117_OFFSET))(this, P0);
		}

		::System::Single _GW_118(::System::Object* P0, ::System::Single P1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_118_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_119(::System::Object* P0, ::System::Object* P1, ::UnityEngine::Component*& P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::UnityEngine::Component*&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_119_OFFSET))(this, P0, P1, P2);
		}

		::System::Object* _GW_120(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_120_OFFSET))(this, P0, P1);
		}

		::System::Object* _GW_121(::System::Object* P0, ::System::Single P1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_121_OFFSET))(this, P0, P1);
		}

		::System::Single _GW_122(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_122_OFFSET))(this, P0, P1);
		}

		::UnityEngine::Color _GW_123(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_123_OFFSET))(this, P0, P1);
		}

		::System::Double _GW_124(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::System::Double(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_124_OFFSET))(this, P0, P1);
		}

		::UnityEngine::LayerMask _GW_125(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_125_OFFSET))(this, P0, P1);
		}

		::System::Int64 _GW_126(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_126_OFFSET))(this, P0, P1);
		}

		::UnityEngine::Matrix4x4 _GW_127(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_127_OFFSET))(this, P0, P1);
		}

		::UnityEngine::Quaternion _GW_128(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_128_OFFSET))(this, P0, P1);
		}

		::UnityEngine::Rect _GW_129(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_129_OFFSET))(this, P0, P1);
		}

		::System::UInt32 _GW_130(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_130_OFFSET))(this, P0, P1);
		}

		::System::UInt64 _GW_131(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_131_OFFSET))(this, P0, P1);
		}

		::System::UInt16 _GW_132(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_132_OFFSET))(this, P0, P1);
		}

		::UnityEngine::Vector2 _GW_133(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_133_OFFSET))(this, P0, P1);
		}

		::UnityEngine::Vector2Int _GW_134(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_134_OFFSET))(this, P0, P1);
		}

		::UnityEngine::Vector3 _GW_135(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_135_OFFSET))(this, P0, P1);
		}

		::UnityEngine::Vector3Int _GW_136(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::UnityEngine::Vector3Int(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_136_OFFSET))(this, P0, P1);
		}

		::UnityEngine::Vector4 _GW_137(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_137_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_138(::System::Object* P0, ::System::Object* P1, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*& P2, ::BehaviorDesigner::Runtime::BehaviorSource*& P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>*&, ::BehaviorDesigner::Runtime::BehaviorSource*&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_138_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Object* _GW_139(::System::Object* P0, ::System::Int32 P1, ::System::Object* P2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_139_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_140(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_140_OFFSET))(this, P0);
		}

		::System::Void _GW_141(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_E25916C97E932268__GW_141_OFFSET))(this, P0);
		}
	};
}
