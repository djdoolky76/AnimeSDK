#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/CallingConventions.h"
#include "unitysdk/System/Reflection/GenericParameterAttributes.h"
#include "unitysdk/System/Reflection/MemberTypes.h"
#include "unitysdk/System/Reflection/TypeAttributes.h"
#include "unitysdk/System/Reflection/TypeInfo.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"
#include "unitysdk/System/RuntimeType_MemberListType.h"
#include "unitysdk/System/TypeCode.h"
#include "unitysdk/System/TypeNameKind.h"
#include "unitysdk/System/Reflection/InterfaceMapping.h"
#include "unitysdk/System/Reflection/ParameterModifier.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class Array; }
namespace System { class MonoTypeInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class CustomAttributeData; }
namespace System::Reflection { class EventInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class MonoCMethod; }
namespace System::Reflection { class PropertyInfo; }
namespace System::Reflection { class RuntimeAssembly; }
namespace System::Reflection { class RuntimeConstructorInfo; }
namespace System::Reflection { class RuntimeEventInfo; }
namespace System::Reflection { class RuntimeFieldInfo; }
namespace System::Reflection { class RuntimeMethodInfo; }
namespace System::Reflection { class RuntimeModule; }
namespace System::Reflection { class RuntimePropertyInfo; }
namespace System::Runtime::InteropServices { class StructLayoutAttribute; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIMETYPE_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1D776450)
#define SYSTEM_RUNTIMETYPE_METHOD_100_100_OFFSET UNITYSDK_OFFSET(0x1D780530)
#define SYSTEM_RUNTIMETYPE_METHOD_101_101_OFFSET UNITYSDK_OFFSET(0x1D7805A0)
#define SYSTEM_RUNTIMETYPE_METHOD_102_102_OFFSET UNITYSDK_OFFSET(0x1D77D780)
#define SYSTEM_RUNTIMETYPE_METHOD_103_103_OFFSET UNITYSDK_OFFSET(0x1D780620)
#define SYSTEM_RUNTIMETYPE_METHOD_104_104_OFFSET UNITYSDK_OFFSET(0x1D7802A0)
#define SYSTEM_RUNTIMETYPE_METHOD_105_105_OFFSET UNITYSDK_OFFSET(0x1D7809C0)
#define SYSTEM_RUNTIMETYPE_METHOD_106_106_OFFSET UNITYSDK_OFFSET(0x1D780C30)
#define SYSTEM_RUNTIMETYPE_METHOD_107_107_OFFSET UNITYSDK_OFFSET(0x1D780DF0)
#define SYSTEM_RUNTIMETYPE_METHOD_108_108_OFFSET UNITYSDK_OFFSET(0x1D781080)
#define SYSTEM_RUNTIMETYPE_METHOD_109_109_OFFSET UNITYSDK_OFFSET(0x1D77F390)
#define SYSTEM_RUNTIMETYPE_METHOD_10_10_OFFSET UNITYSDK_OFFSET(0x1D776110)
#define SYSTEM_RUNTIMETYPE_METHOD_110_110_OFFSET UNITYSDK_OFFSET(0x1D7817B0)
#define SYSTEM_RUNTIMETYPE_METHOD_111_111_OFFSET UNITYSDK_OFFSET(0x1D781810)
#define SYSTEM_RUNTIMETYPE_METHOD_112_112_OFFSET UNITYSDK_OFFSET(0x1D781860)
#define SYSTEM_RUNTIMETYPE_METHOD_113_113_OFFSET UNITYSDK_OFFSET(0x1D781910)
#define SYSTEM_RUNTIMETYPE_METHOD_114_114_OFFSET UNITYSDK_OFFSET(0x1D781930)
#define SYSTEM_RUNTIMETYPE_METHOD_115_115_OFFSET UNITYSDK_OFFSET(0x1D7819B0)
#define SYSTEM_RUNTIMETYPE_METHOD_116_116_OFFSET UNITYSDK_OFFSET(0x1D7819E0)
#define SYSTEM_RUNTIMETYPE_METHOD_117_117_OFFSET UNITYSDK_OFFSET(0x1D781A50)
#define SYSTEM_RUNTIMETYPE_METHOD_118_118_OFFSET UNITYSDK_OFFSET(0x1D77F750)
#define SYSTEM_RUNTIMETYPE_METHOD_119_119_OFFSET UNITYSDK_OFFSET(0x1D77BAC0)
#define SYSTEM_RUNTIMETYPE_METHOD_11_11_OFFSET UNITYSDK_OFFSET(0x1D7763C0)
#define SYSTEM_RUNTIMETYPE_METHOD_120_120_OFFSET UNITYSDK_OFFSET(0x1D781A70)
#define SYSTEM_RUNTIMETYPE_METHOD_121_121_OFFSET UNITYSDK_OFFSET(0x1D77D450)
#define SYSTEM_RUNTIMETYPE_METHOD_122_122_OFFSET UNITYSDK_OFFSET(0x1D781BD0)
#define SYSTEM_RUNTIMETYPE_METHOD_123_123_OFFSET UNITYSDK_OFFSET(0x1D776C60)
#define SYSTEM_RUNTIMETYPE_METHOD_124_124_OFFSET UNITYSDK_OFFSET(0x1D781BE0)
#define SYSTEM_RUNTIMETYPE_METHOD_125_125_OFFSET UNITYSDK_OFFSET(0x1D781BF0)
#define SYSTEM_RUNTIMETYPE_METHOD_126_126_OFFSET UNITYSDK_OFFSET(0x1D777520)
#define SYSTEM_RUNTIMETYPE_METHOD_127_127_OFFSET UNITYSDK_OFFSET(0x1D777B20)
#define SYSTEM_RUNTIMETYPE_METHOD_128_128_OFFSET UNITYSDK_OFFSET(0x1D781C00)
#define SYSTEM_RUNTIMETYPE_METHOD_129_129_OFFSET UNITYSDK_OFFSET(0x1D781FB0)
#define SYSTEM_RUNTIMETYPE_METHOD_12_12_OFFSET UNITYSDK_OFFSET(0x1D776190)
#define SYSTEM_RUNTIMETYPE_METHOD_130_130_OFFSET UNITYSDK_OFFSET(0x1D781FC0)
#define SYSTEM_RUNTIMETYPE_METHOD_131_131_OFFSET UNITYSDK_OFFSET(0x1D7820A0)
#define SYSTEM_RUNTIMETYPE_METHOD_132_132_OFFSET UNITYSDK_OFFSET(0x1D782140)
#define SYSTEM_RUNTIMETYPE_METHOD_133_133_OFFSET UNITYSDK_OFFSET(0x1D782190)
#define SYSTEM_RUNTIMETYPE_METHOD_134_134_OFFSET UNITYSDK_OFFSET(0x1D7821F0)
#define SYSTEM_RUNTIMETYPE_METHOD_135_135_OFFSET UNITYSDK_OFFSET(0x1D782200)
#define SYSTEM_RUNTIMETYPE_METHOD_136_136_OFFSET UNITYSDK_OFFSET(0x1D7757A0)
#define SYSTEM_RUNTIMETYPE_METHOD_137_137_OFFSET UNITYSDK_OFFSET(0x1D780C00)
#define SYSTEM_RUNTIMETYPE_METHOD_138_138_OFFSET UNITYSDK_OFFSET(0x1D782260)
#define SYSTEM_RUNTIMETYPE_METHOD_139_139_OFFSET UNITYSDK_OFFSET(0x1D782250)
#define SYSTEM_RUNTIMETYPE_METHOD_13_13_OFFSET UNITYSDK_OFFSET(0x1D7764A0)
#define SYSTEM_RUNTIMETYPE_METHOD_140_140_OFFSET UNITYSDK_OFFSET(0x1D77CEA0)
#define SYSTEM_RUNTIMETYPE_METHOD_141_141_OFFSET UNITYSDK_OFFSET(0x1D77BED0)
#define SYSTEM_RUNTIMETYPE_METHOD_142_142_OFFSET UNITYSDK_OFFSET(0x1D77D520)
#define SYSTEM_RUNTIMETYPE_METHOD_143_143_OFFSET UNITYSDK_OFFSET(0x1D782270)
#define SYSTEM_RUNTIMETYPE_METHOD_144_144_OFFSET UNITYSDK_OFFSET(0x1D782280)
#define SYSTEM_RUNTIMETYPE_METHOD_145_145_OFFSET UNITYSDK_OFFSET(0x1D778840)
#define SYSTEM_RUNTIMETYPE_METHOD_146_146_OFFSET UNITYSDK_OFFSET(0x1D7781B0)
#define SYSTEM_RUNTIMETYPE_METHOD_147_147_OFFSET UNITYSDK_OFFSET(0x1D77AEA0)
#define SYSTEM_RUNTIMETYPE_METHOD_148_148_OFFSET UNITYSDK_OFFSET(0x1D782290)
#define SYSTEM_RUNTIMETYPE_METHOD_149_149_OFFSET UNITYSDK_OFFSET(0x1D778EB0)
#define SYSTEM_RUNTIMETYPE_METHOD_14_14_OFFSET UNITYSDK_OFFSET(0x1D776960)
#define SYSTEM_RUNTIMETYPE_METHOD_150_150_OFFSET UNITYSDK_OFFSET(0x1D7822A0)
#define SYSTEM_RUNTIMETYPE_METHOD_151_151_OFFSET UNITYSDK_OFFSET(0x1D77F500)
#define SYSTEM_RUNTIMETYPE_METHOD_152_152_OFFSET UNITYSDK_OFFSET(0x1D77AEB0)
#define SYSTEM_RUNTIMETYPE_METHOD_153_153_OFFSET UNITYSDK_OFFSET(0x1D7822B0)
#define SYSTEM_RUNTIMETYPE_METHOD_154_154_OFFSET UNITYSDK_OFFSET(0x1D782340)
#define SYSTEM_RUNTIMETYPE_METHOD_155_155_OFFSET UNITYSDK_OFFSET(0x1D77EDB0)
#define SYSTEM_RUNTIMETYPE_METHOD_156_156_OFFSET UNITYSDK_OFFSET(0x1D782350)
#define SYSTEM_RUNTIMETYPE_METHOD_157_157_OFFSET UNITYSDK_OFFSET(0x1D7823F0)
#define SYSTEM_RUNTIMETYPE_METHOD_15_15_OFFSET UNITYSDK_OFFSET(0x1D777110)
#define SYSTEM_RUNTIMETYPE_METHOD_16_16_OFFSET UNITYSDK_OFFSET(0x1D777820)
#define SYSTEM_RUNTIMETYPE_METHOD_17_17_OFFSET UNITYSDK_OFFSET(0x1D777FD0)
#define SYSTEM_RUNTIMETYPE_METHOD_18_18_OFFSET UNITYSDK_OFFSET(0x1D778660)
#define SYSTEM_RUNTIMETYPE_METHOD_19_19_OFFSET UNITYSDK_OFFSET(0x1D778CF0)
#define SYSTEM_RUNTIMETYPE_METHOD_1_1_OFFSET UNITYSDK_OFFSET(0x1D782400)
#define SYSTEM_RUNTIMETYPE_METHOD_20_20_OFFSET UNITYSDK_OFFSET(0x1D7793B0)
#define SYSTEM_RUNTIMETYPE_METHOD_21_21_OFFSET UNITYSDK_OFFSET(0x1D779430)
#define SYSTEM_RUNTIMETYPE_METHOD_22_22_OFFSET UNITYSDK_OFFSET(0x1D7794B0)
#define SYSTEM_RUNTIMETYPE_METHOD_23_23_OFFSET UNITYSDK_OFFSET(0x1D779530)
#define SYSTEM_RUNTIMETYPE_METHOD_24_24_OFFSET UNITYSDK_OFFSET(0x1D7795A0)
#define SYSTEM_RUNTIMETYPE_METHOD_25_25_OFFSET UNITYSDK_OFFSET(0x1D779610)
#define SYSTEM_RUNTIMETYPE_METHOD_26_26_OFFSET UNITYSDK_OFFSET(0x1D779680)
#define SYSTEM_RUNTIMETYPE_METHOD_27_27_OFFSET UNITYSDK_OFFSET(0x1D7798E0)
#define SYSTEM_RUNTIMETYPE_METHOD_28_28_OFFSET UNITYSDK_OFFSET(0x1D779C80)
#define SYSTEM_RUNTIMETYPE_METHOD_29_29_OFFSET UNITYSDK_OFFSET(0x1D779ED0)
#define SYSTEM_RUNTIMETYPE_METHOD_2_2_OFFSET UNITYSDK_OFFSET(0x1D775690)
#define SYSTEM_RUNTIMETYPE_METHOD_30_30_OFFSET UNITYSDK_OFFSET(0x1D77A170)
#define SYSTEM_RUNTIMETYPE_METHOD_31_31_OFFSET UNITYSDK_OFFSET(0x1D77A340)
#define SYSTEM_RUNTIMETYPE_METHOD_32_32_OFFSET UNITYSDK_OFFSET(0x1D77A9B0)
#define SYSTEM_RUNTIMETYPE_METHOD_33_33_OFFSET UNITYSDK_OFFSET(0x1D77AEC0)
#define SYSTEM_RUNTIMETYPE_METHOD_34_34_OFFSET UNITYSDK_OFFSET(0x1D77B1B0)
#define SYSTEM_RUNTIMETYPE_METHOD_35_35_OFFSET UNITYSDK_OFFSET(0x1D77B590)
#define SYSTEM_RUNTIMETYPE_METHOD_36_36_OFFSET UNITYSDK_OFFSET(0x1D77B5B0)
#define SYSTEM_RUNTIMETYPE_METHOD_37_37_OFFSET UNITYSDK_OFFSET(0x1D77B5D0)
#define SYSTEM_RUNTIMETYPE_METHOD_38_38_OFFSET UNITYSDK_OFFSET(0x1D77B600)
#define SYSTEM_RUNTIMETYPE_METHOD_39_39_OFFSET UNITYSDK_OFFSET(0x1D77B630)
#define SYSTEM_RUNTIMETYPE_METHOD_3_3_OFFSET UNITYSDK_OFFSET(0x1D7757B0)
#define SYSTEM_RUNTIMETYPE_METHOD_40_40_OFFSET UNITYSDK_OFFSET(0x1D77B650)
#define SYSTEM_RUNTIMETYPE_METHOD_41_41_OFFSET UNITYSDK_OFFSET(0x1D77B670)
#define SYSTEM_RUNTIMETYPE_METHOD_42_42_OFFSET UNITYSDK_OFFSET(0x1D77B6A0)
#define SYSTEM_RUNTIMETYPE_METHOD_43_43_OFFSET UNITYSDK_OFFSET(0x1D77B830)
#define SYSTEM_RUNTIMETYPE_METHOD_44_44_OFFSET UNITYSDK_OFFSET(0x1D77B940)
#define SYSTEM_RUNTIMETYPE_METHOD_45_45_OFFSET UNITYSDK_OFFSET(0x1D77BA30)
#define SYSTEM_RUNTIMETYPE_METHOD_46_46_OFFSET UNITYSDK_OFFSET(0x1D77BAB0)
#define SYSTEM_RUNTIMETYPE_METHOD_47_47_OFFSET UNITYSDK_OFFSET(0x1D776590)
#define SYSTEM_RUNTIMETYPE_METHOD_48_48_OFFSET UNITYSDK_OFFSET(0x1D77BC60)
#define SYSTEM_RUNTIMETYPE_METHOD_49_49_OFFSET UNITYSDK_OFFSET(0x1D77BC70)
#define SYSTEM_RUNTIMETYPE_METHOD_4_4_OFFSET UNITYSDK_OFFSET(0x1D7759D0)
#define SYSTEM_RUNTIMETYPE_METHOD_50_50_OFFSET UNITYSDK_OFFSET(0x1D77BC90)
#define SYSTEM_RUNTIMETYPE_METHOD_51_51_OFFSET UNITYSDK_OFFSET(0x1D77BCF0)
#define SYSTEM_RUNTIMETYPE_METHOD_52_52_OFFSET UNITYSDK_OFFSET(0x1D77BD00)
#define SYSTEM_RUNTIMETYPE_METHOD_53_53_OFFSET UNITYSDK_OFFSET(0x1D77BD40)
#define SYSTEM_RUNTIMETYPE_METHOD_54_54_OFFSET UNITYSDK_OFFSET(0x1D77BD60)
#define SYSTEM_RUNTIMETYPE_METHOD_55_55_OFFSET UNITYSDK_OFFSET(0x1D77BD70)
#define SYSTEM_RUNTIMETYPE_METHOD_56_56_OFFSET UNITYSDK_OFFSET(0x1D77BD80)
#define SYSTEM_RUNTIMETYPE_METHOD_57_57_OFFSET UNITYSDK_OFFSET(0x1D77BE20)
#define SYSTEM_RUNTIMETYPE_METHOD_58_58_OFFSET UNITYSDK_OFFSET(0x1D77BE80)
#define SYSTEM_RUNTIMETYPE_METHOD_59_59_OFFSET UNITYSDK_OFFSET(0x1D77BBC0)
#define SYSTEM_RUNTIMETYPE_METHOD_5_5_OFFSET UNITYSDK_OFFSET(0x1D775AA0)
#define SYSTEM_RUNTIMETYPE_METHOD_60_60_OFFSET UNITYSDK_OFFSET(0x1D77BEF0)
#define SYSTEM_RUNTIMETYPE_METHOD_61_61_OFFSET UNITYSDK_OFFSET(0x1D77BF30)
#define SYSTEM_RUNTIMETYPE_METHOD_62_62_OFFSET UNITYSDK_OFFSET(0x1D77BF50)
#define SYSTEM_RUNTIMETYPE_METHOD_63_63_OFFSET UNITYSDK_OFFSET(0x1D77BFF0)
#define SYSTEM_RUNTIMETYPE_METHOD_64_64_OFFSET UNITYSDK_OFFSET(0x1D77C060)
#define SYSTEM_RUNTIMETYPE_METHOD_65_65_OFFSET UNITYSDK_OFFSET(0x1D77C190)
#define SYSTEM_RUNTIMETYPE_METHOD_66_66_OFFSET UNITYSDK_OFFSET(0x1D77C370)
#define SYSTEM_RUNTIMETYPE_METHOD_67_67_OFFSET UNITYSDK_OFFSET(0x1D77C4A0)
#define SYSTEM_RUNTIMETYPE_METHOD_68_68_OFFSET UNITYSDK_OFFSET(0x1D77CC50)
#define SYSTEM_RUNTIMETYPE_METHOD_69_69_OFFSET UNITYSDK_OFFSET(0x1D77CE30)
#define SYSTEM_RUNTIMETYPE_METHOD_6_6_OFFSET UNITYSDK_OFFSET(0x1D775B90)
#define SYSTEM_RUNTIMETYPE_METHOD_70_70_OFFSET UNITYSDK_OFFSET(0x1D77CEB0)
#define SYSTEM_RUNTIMETYPE_METHOD_71_71_OFFSET UNITYSDK_OFFSET(0x1D77CF20)
#define SYSTEM_RUNTIMETYPE_METHOD_72_72_OFFSET UNITYSDK_OFFSET(0x1D77D420)
#define SYSTEM_RUNTIMETYPE_METHOD_73_73_OFFSET UNITYSDK_OFFSET(0x1D77BB90)
#define SYSTEM_RUNTIMETYPE_METHOD_74_74_OFFSET UNITYSDK_OFFSET(0x1D77D460)
#define SYSTEM_RUNTIMETYPE_METHOD_75_75_OFFSET UNITYSDK_OFFSET(0x1D77D580)
#define SYSTEM_RUNTIMETYPE_METHOD_76_76_OFFSET UNITYSDK_OFFSET(0x1D77D650)
#define SYSTEM_RUNTIMETYPE_METHOD_77_77_OFFSET UNITYSDK_OFFSET(0x1D77D690)
#define SYSTEM_RUNTIMETYPE_METHOD_78_78_OFFSET UNITYSDK_OFFSET(0x1D77D6F0)
#define SYSTEM_RUNTIMETYPE_METHOD_79_79_OFFSET UNITYSDK_OFFSET(0x1D77D850)
#define SYSTEM_RUNTIMETYPE_METHOD_7_7_OFFSET UNITYSDK_OFFSET(0x1D775C60)
#define SYSTEM_RUNTIMETYPE_METHOD_80_80_OFFSET UNITYSDK_OFFSET(0x1D77EE70)
#define SYSTEM_RUNTIMETYPE_METHOD_81_81_OFFSET UNITYSDK_OFFSET(0x1D7743A0)
#define SYSTEM_RUNTIMETYPE_METHOD_82_82_OFFSET UNITYSDK_OFFSET(0x1D776950)
#define SYSTEM_RUNTIMETYPE_METHOD_83_83_OFFSET UNITYSDK_OFFSET(0x1D77EE80)
#define SYSTEM_RUNTIMETYPE_METHOD_84_84_OFFSET UNITYSDK_OFFSET(0x1D77EE90)
#define SYSTEM_RUNTIMETYPE_METHOD_85_85_OFFSET UNITYSDK_OFFSET(0x1D77EF00)
#define SYSTEM_RUNTIMETYPE_METHOD_86_86_OFFSET UNITYSDK_OFFSET(0x1D77EF70)
#define SYSTEM_RUNTIMETYPE_METHOD_87_87_OFFSET UNITYSDK_OFFSET(0x1D77F080)
#define SYSTEM_RUNTIMETYPE_METHOD_88_88_OFFSET UNITYSDK_OFFSET(0x1D77F190)
#define SYSTEM_RUNTIMETYPE_METHOD_89_89_OFFSET UNITYSDK_OFFSET(0x1D77F210)
#define SYSTEM_RUNTIMETYPE_METHOD_8_8_OFFSET UNITYSDK_OFFSET(0x1D775CF0)
#define SYSTEM_RUNTIMETYPE_METHOD_90_90_OFFSET UNITYSDK_OFFSET(0x1D77F480)
#define SYSTEM_RUNTIMETYPE_METHOD_91_91_OFFSET UNITYSDK_OFFSET(0x1D77F4F0)
#define SYSTEM_RUNTIMETYPE_METHOD_92_92_OFFSET UNITYSDK_OFFSET(0x1D77F510)
#define SYSTEM_RUNTIMETYPE_METHOD_93_93_OFFSET UNITYSDK_OFFSET(0x1D77F530)
#define SYSTEM_RUNTIMETYPE_METHOD_94_94_OFFSET UNITYSDK_OFFSET(0x1D77F920)
#define SYSTEM_RUNTIMETYPE_METHOD_95_95_OFFSET UNITYSDK_OFFSET(0x1D7801D0)
#define SYSTEM_RUNTIMETYPE_METHOD_96_96_OFFSET UNITYSDK_OFFSET(0x1D7802D0)
#define SYSTEM_RUNTIMETYPE_METHOD_97_97_OFFSET UNITYSDK_OFFSET(0x1D780480)
#define SYSTEM_RUNTIMETYPE_METHOD_98_98_OFFSET UNITYSDK_OFFSET(0x1D780490)
#define SYSTEM_RUNTIMETYPE_METHOD_99_99_OFFSET UNITYSDK_OFFSET(0x1D7804A0)
#define SYSTEM_RUNTIMETYPE_METHOD_9_9_OFFSET UNITYSDK_OFFSET(0x1D775F60)

namespace System
{
	inline static constexpr unsigned int RuntimeType_TypeDefinitionIndex = 309;

	class RuntimeType : public ::System::Reflection::TypeInfo
	{
	public:
		static ::System::RuntimeType** StaticGet_Field_0()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x560);
		}
		static ::System::RuntimeType** StaticGet_Field_1()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x568);
		}
		static ::System::RuntimeType** StaticGet_Field_2()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x570);
		}
		static ::System::RuntimeType** StaticGet_Field_3()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x578);
		}
		static ::System::RuntimeType** StaticGet_Field_4()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x580);
		}
		static ::System::RuntimeType** StaticGet_Field_5()
		{
			return (::System::RuntimeType**)Il2CppClass::FromTypeDefinitionIndex(RuntimeType_TypeDefinitionIndex)->GetStaticField(0x588);
		}
		::System::MonoTypeInfo* Field_6; // 0x18
		::System::Object* Field_7; // 0x20
		::System::Reflection::RuntimeConstructorInfo* Field_8; // 0x28

		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_0_OFFSET))(this);
		}

		static ::System::Void Method_1_1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_1_1_OFFSET))();
		}

		static ::System::Void Method_2_2(::System::RuntimeType* type)
		{
			return ((::System::Void(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_2_2_OFFSET))(type);
		}

		static ::System::Void Method_3_3(::Il2CppArray<::System::RuntimeType*>* genericArguments, ::Il2CppArray<::System::RuntimeType*>* genericParamters)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::RuntimeType*>*, ::Il2CppArray<::System::RuntimeType*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_3_3_OFFSET))(genericArguments, genericParamters);
		}

		static ::System::Void Method_4_4(::System::String* fullname, ::System::String*& name, ::System::String*& ns)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_4_4_OFFSET))(fullname, name, ns);
		}

		static ::System::Void Method_5_5(::System::Reflection::BindingFlags bindingFlags, ::System::String*& name, ::System::Boolean allowPrefixLookup, ::System::Boolean& prefixLookup, ::System::Boolean& ignoreCase, ::System::RuntimeType_MemberListType& listType)
		{
			return ((::System::Void(*)(::System::Reflection::BindingFlags, ::System::String*&, ::System::Boolean, ::System::Boolean&, ::System::Boolean&, ::System::RuntimeType_MemberListType&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_5_5_OFFSET))(bindingFlags, name, allowPrefixLookup, prefixLookup, ignoreCase, listType);
		}

		static ::System::Void Method_6_6(::System::Reflection::BindingFlags bindingFlags, ::System::String*& name, ::System::Boolean& ignoreCase, ::System::RuntimeType_MemberListType& listType)
		{
			return ((::System::Void(*)(::System::Reflection::BindingFlags, ::System::String*&, ::System::Boolean&, ::System::RuntimeType_MemberListType&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_6_6_OFFSET))(bindingFlags, name, ignoreCase, listType);
		}

		static ::System::Boolean Method_7_7(::System::Reflection::MemberInfo* memberInfo, ::System::String* name, ::System::Boolean ignoreCase)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_7_7_OFFSET))(memberInfo, name, ignoreCase);
		}

		static ::System::Boolean Method_8_8(::System::Reflection::MemberInfo* memberInfo, ::System::Reflection::BindingFlags bindingFlags, ::System::Boolean isPublic, ::System::Boolean isNonProtectedInternal, ::System::Boolean isStatic, ::System::String* name, ::System::Boolean prefixLookup)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Reflection::BindingFlags, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_8_8_OFFSET))(memberInfo, bindingFlags, isPublic, isNonProtectedInternal, isStatic, name, prefixLookup);
		}

		static ::System::Boolean Method_9_9(::System::Type* type, ::System::Reflection::BindingFlags bindingFlags, ::System::String* name, ::System::Boolean prefixLookup, ::System::String* ns)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Reflection::BindingFlags, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_9_9_OFFSET))(type, bindingFlags, name, prefixLookup, ns);
		}

		static ::System::Boolean Method_10_10(::System::Reflection::RuntimeMethodInfo* method, ::System::Reflection::BindingFlags bindingFlags, ::System::Reflection::CallingConventions callConv, ::Il2CppArray<::System::Type*>* argumentTypes)
		{
			return ((::System::Boolean(*)(::System::Reflection::RuntimeMethodInfo*, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_10_10_OFFSET))(method, bindingFlags, callConv, argumentTypes);
		}

		static ::System::Boolean Method_11_11(::System::Reflection::RuntimeConstructorInfo* constructor, ::System::Reflection::BindingFlags bindingFlags, ::System::Reflection::CallingConventions callConv, ::Il2CppArray<::System::Type*>* argumentTypes)
		{
			return ((::System::Boolean(*)(::System::Reflection::RuntimeConstructorInfo*, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_11_11_OFFSET))(constructor, bindingFlags, callConv, argumentTypes);
		}

		static ::System::Boolean Method_12_12(::System::Reflection::MethodBase* methodBase, ::System::Reflection::BindingFlags methodFlags, ::System::Reflection::BindingFlags bindingFlags, ::System::Reflection::CallingConventions callConv, ::Il2CppArray<::System::Type*>* argumentTypes)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*, ::System::Reflection::BindingFlags, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_12_12_OFFSET))(methodBase, methodFlags, bindingFlags, callConv, argumentTypes);
		}

		::System::Boolean Method_13_13()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_13_13_OFFSET))(this);
		}

		::System::Object* Method_14_14(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::CallingConventions callConv, ::Il2CppArray<::System::Type*>* types, ::System::Boolean allowPrefixLookup)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_14_14_OFFSET))(this, name, bindingAttr, callConv, types, allowPrefixLookup);
		}

		::System::Object* Method_15_15(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::CallingConventions callConv, ::Il2CppArray<::System::Type*>* types, ::System::Boolean allowPrefixLookup)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_15_15_OFFSET))(this, name, bindingAttr, callConv, types, allowPrefixLookup);
		}

		::System::Object* Method_16_16(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::Il2CppArray<::System::Type*>* types, ::System::Boolean allowPrefixLookup)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::Il2CppArray<::System::Type*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_16_16_OFFSET))(this, name, bindingAttr, types, allowPrefixLookup);
		}

		::System::Object* Method_17_17(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Boolean allowPrefixLookup)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_17_17_OFFSET))(this, name, bindingAttr, allowPrefixLookup);
		}

		::System::Object* Method_18_18(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Boolean allowPrefixLookup)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_18_18_OFFSET))(this, name, bindingAttr, allowPrefixLookup);
		}

		::System::Object* Method_19_19(::System::String* fullname, ::System::Reflection::BindingFlags bindingAttr, ::System::Boolean allowPrefixLookup)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_19_19_OFFSET))(this, fullname, bindingAttr, allowPrefixLookup);
		}

		::Il2CppArray<::System::Reflection::MethodInfo*>* Method_20_20(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_20_20_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::ConstructorInfo*>* Method_21_21(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::ConstructorInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_21_21_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::PropertyInfo*>* Method_22_22(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::PropertyInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_22_22_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::EventInfo*>* Method_23_23(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::EventInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_23_23_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::FieldInfo*>* Method_24_24(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::FieldInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_24_24_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Type*>* Method_25_25(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_25_25_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* Method_26_26(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_26_26_OFFSET))(this, bindingAttr);
		}

		::System::Reflection::MethodInfo* Method_27_27(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Reflection::CallingConventions callConv, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_27_27_OFFSET))(this, name, bindingAttr, binder, callConv, types, modifiers);
		}

		::System::Reflection::ConstructorInfo* Method_28_28(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Reflection::CallingConventions callConvention, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_28_28_OFFSET))(this, bindingAttr, binder, callConvention, types, modifiers);
		}

		::System::Reflection::PropertyInfo* Method_29_29(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Type* returnType, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_29_29_OFFSET))(this, name, bindingAttr, binder, returnType, types, modifiers);
		}

		::System::Reflection::EventInfo* Method_30_30(::System::String* name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Reflection::EventInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_30_30_OFFSET))(this, name, bindingAttr);
		}

		::System::Reflection::FieldInfo* Method_31_31(::System::String* name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_31_31_OFFSET))(this, name, bindingAttr);
		}

		::System::Type* Method_32_32(::System::String* fullname, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_32_32_OFFSET))(this, fullname, ignoreCase);
		}

		::System::Type* Method_33_33(::System::String* fullname, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_33_33_OFFSET))(this, fullname, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* Method_34_34(::System::String* name, ::System::Reflection::MemberTypes type, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::MemberTypes, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_34_34_OFFSET))(this, name, type, bindingAttr);
		}

		::System::Reflection::Module* Method_35_35()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_35_35_OFFSET))(this);
		}

		::System::Reflection::RuntimeModule* Method_36_36()
		{
			return ((::System::Reflection::RuntimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_36_36_OFFSET))(this);
		}

		::System::Reflection::Assembly* Method_37_37()
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_37_37_OFFSET))(this);
		}

		::System::Reflection::RuntimeAssembly* Method_38_38()
		{
			return ((::System::Reflection::RuntimeAssembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_38_38_OFFSET))(this);
		}

		::System::RuntimeTypeHandle Method_39_39()
		{
			return ((::System::RuntimeTypeHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_39_39_OFFSET))(this);
		}

		::System::RuntimeTypeHandle Method_40_40()
		{
			return ((::System::RuntimeTypeHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_40_40_OFFSET))(this);
		}

		::System::Boolean Method_41_41(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_41_41_OFFSET))(this, o);
		}

		::System::Boolean Method_42_42(::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_42_42_OFFSET))(this, type);
		}

		::System::Boolean Method_43_43(::System::Reflection::TypeInfo* typeInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_43_43_OFFSET))(this, typeInfo);
		}

		::System::Boolean Method_44_44(::System::Type* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_44_44_OFFSET))(this, c);
		}

		::System::Boolean Method_45_45(::System::Type* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_45_45_OFFSET))(this, other);
		}

		::System::Type* Method_46_46()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_46_46_OFFSET))(this);
		}

		::System::RuntimeType* Method_47_47()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_47_47_OFFSET))(this);
		}

		::System::Type* Method_48_48()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_48_48_OFFSET))(this);
		}

		::System::Reflection::TypeAttributes Method_49_49()
		{
			return ((::System::Reflection::TypeAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_49_49_OFFSET))(this);
		}

		::System::Boolean Method_50_50()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_50_50_OFFSET))(this);
		}

		::System::Boolean Method_51_51()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_51_51_OFFSET))(this);
		}

		::System::Boolean Method_52_52()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_52_52_OFFSET))(this);
		}

		::System::Boolean Method_53_53()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_53_53_OFFSET))(this);
		}

		::System::Boolean Method_54_54()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_54_54_OFFSET))(this);
		}

		::System::Boolean Method_55_55()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_55_55_OFFSET))(this);
		}

		::System::Boolean Method_56_56()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_56_56_OFFSET))(this);
		}

		::System::Boolean Method_57_57()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_57_57_OFFSET))(this);
		}

		::System::Boolean Method_58_58()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_58_58_OFFSET))(this);
		}

		::System::Reflection::GenericParameterAttributes Method_59_59()
		{
			return ((::System::Reflection::GenericParameterAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_59_59_OFFSET))(this);
		}

		::System::Boolean Method_60_60()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_60_60_OFFSET))(this);
		}

		::System::Boolean Method_61_61()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_61_61_OFFSET))(this);
		}

		::System::Int32 Method_62_62()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_62_62_OFFSET))(this);
		}

		::System::Type* Method_63_63()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_63_63_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* Method_64_64()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_64_64_OFFSET))(this);
		}

		::System::Array* Method_65_65()
		{
			return ((::System::Array*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_65_65_OFFSET))(this);
		}

		::System::Type* Method_66_66()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_66_66_OFFSET))(this);
		}

		::System::Boolean Method_67_67(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_67_67_OFFSET))(this, value);
		}

		::System::String* Method_68_68(::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_68_68_OFFSET))(this, value);
		}

		::Il2CppArray<::System::RuntimeType*>* Method_69_69()
		{
			return ((::Il2CppArray<::System::RuntimeType*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_69_69_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* Method_70_70()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_70_70_OFFSET))(this);
		}

		::System::Type* Method_71_71(::Il2CppArray<::System::Type*>* instantiation)
		{
			return ((::System::Type*(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_71_71_OFFSET))(this, instantiation);
		}

		::System::Boolean Method_72_72()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_72_72_OFFSET))(this);
		}

		::System::Boolean Method_73_73()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_73_73_OFFSET))(this);
		}

		::System::Int32 Method_74_74()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_74_74_OFFSET))(this);
		}

		::System::Type* Method_75_75()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_75_75_OFFSET))(this);
		}

		::System::Boolean Method_76_76()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_76_76_OFFSET))(this);
		}

		::System::Boolean Method_77_77()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_77_77_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* Method_78_78()
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_78_78_OFFSET))(this);
		}

		::System::Object* Method_79_79(::System::String* name, ::System::Reflection::BindingFlags bindingFlags, ::System::Reflection::Binder* binder, ::System::Object* target, ::Il2CppArray<::System::Object*>* providedArgs, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers, ::System::Globalization::CultureInfo* culture, ::Il2CppArray<::System::String*>* namedParams)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*, ::System::Globalization::CultureInfo*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_79_79_OFFSET))(this, name, bindingFlags, binder, target, providedArgs, modifiers, culture, namedParams);
		}

		::System::Boolean Method_80_80(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_80_80_OFFSET))(this, obj);
		}

		static ::System::Boolean Method_81_81(::System::RuntimeType* left, ::System::RuntimeType* right)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_81_81_OFFSET))(left, right);
		}

		static ::System::Boolean Method_82_82(::System::RuntimeType* left, ::System::RuntimeType* right)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_82_82_OFFSET))(left, right);
		}

		::System::Object* Method_83_83()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_83_83_OFFSET))(this);
		}

		::System::Void Method_84_84(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_84_84_OFFSET))(this, info, context);
		}

		::Il2CppArray<::System::Object*>* Method_85_85(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_85_85_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_86_86(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_86_86_OFFSET))(this, attributeType, inherit);
		}

		::System::Boolean Method_87_87(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_87_87_OFFSET))(this, attributeType, inherit);
		}

		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* Method_88_88()
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_88_88_OFFSET))(this);
		}

		::System::String* Method_89_89(::System::Boolean serialization)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_89_89_OFFSET))(this, serialization);
		}

		::System::Reflection::MemberTypes Method_90_90()
		{
			return ((::System::Reflection::MemberTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_90_90_OFFSET))(this);
		}

		::System::Type* Method_91_91()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_91_91_OFFSET))(this);
		}

		::System::Int32 Method_92_92()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_92_92_OFFSET))(this);
		}

		::System::Void Method_93_93()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_93_93_OFFSET))(this);
		}

		::System::Object* Method_94_94(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* args, ::System::Globalization::CultureInfo* culture, ::Il2CppArray<::System::Object*>* activationAttributes, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*, ::Il2CppArray<::System::Object*>*, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_94_94_OFFSET))(this, bindingAttr, binder, args, culture, activationAttributes, stackMark);
		}

		::System::Object* Method_95_95(::System::Boolean publicOnly, ::System::Boolean skipCheckThis, ::System::Boolean fillCache, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_95_95_OFFSET))(this, publicOnly, skipCheckThis, fillCache, stackMark);
		}

		::System::Reflection::MonoCMethod* Method_96_96()
		{
			return ((::System::Reflection::MonoCMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_96_96_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_97_97(::System::Reflection::MethodInfo* generic)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_97_97_OFFSET))(this, generic);
		}

		::System::Reflection::ConstructorInfo* Method_98_98(::System::Reflection::ConstructorInfo* generic)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_98_98_OFFSET))(this, generic);
		}

		::System::Reflection::MethodInfo* Method_99_99(::System::Reflection::MethodInfo* fromNoninstanciated)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_99_99_OFFSET))(this, fromNoninstanciated);
		}

		::System::Reflection::ConstructorInfo* Method_100_100(::System::Reflection::ConstructorInfo* fromNoninstanciated)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_100_100_OFFSET))(this, fromNoninstanciated);
		}

		::System::Reflection::FieldInfo* Method_101_101(::System::Reflection::FieldInfo* fromNoninstanciated)
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_101_101_OFFSET))(this, fromNoninstanciated);
		}

		::System::String* Method_102_102()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_102_102_OFFSET))(this);
		}

		::System::Reflection::RuntimeConstructorInfo* Method_103_103()
		{
			return ((::System::Reflection::RuntimeConstructorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_103_103_OFFSET))(this);
		}

		::System::Object* Method_104_104(::System::Boolean publicOnly, ::System::Boolean skipCheckThis, ::System::Boolean fillCache, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_104_104_OFFSET))(this, publicOnly, skipCheckThis, fillCache, stackMark);
		}

		::System::Object* Method_105_105(::System::Boolean nonPublic)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_105_105_OFFSET))(this, nonPublic);
		}

		::System::Object* Method_106_106(::System::Object* value, ::System::Reflection::Binder* binder, ::System::Globalization::CultureInfo* culture, ::System::Reflection::BindingFlags invokeAttr)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_106_106_OFFSET))(this, value, binder, culture, invokeAttr);
		}

		::System::Object* Method_107_107(::System::Object* value, ::System::Boolean& failed)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_107_107_OFFSET))(this, value, failed);
		}

		static ::System::Object* Method_108_108(::System::Object* value, ::System::Type* targetType)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_108_108_OFFSET))(value, targetType);
		}

		::System::String* Method_109_109(::System::TypeNameKind kind)
		{
			return ((::System::String*(*)(::PVOID, ::System::TypeNameKind))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_109_109_OFFSET))(this, kind);
		}

		::System::Type* Method_110_110(::System::Int32 rank)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_110_110_OFFSET))(this, rank);
		}

		::System::Type* Method_111_111()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_111_111_OFFSET))(this);
		}

		::System::Type* Method_112_112(::System::Int32 rank)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_112_112_OFFSET))(this, rank);
		}

		::System::Type* Method_113_113()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_113_113_OFFSET))(this);
		}

		::System::Type* Method_114_114()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_114_114_OFFSET))(this);
		}

		static ::System::Type* Method_115_115(::System::Type* type)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_115_115_OFFSET))(type);
		}

		::System::Type* Method_116_116()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_116_116_OFFSET))(this);
		}

		::System::Runtime::InteropServices::StructLayoutAttribute* Method_117_117()
		{
			return ((::System::Runtime::InteropServices::StructLayoutAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_117_117_OFFSET))(this);
		}

		::System::Boolean Method_118_118()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_118_118_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* Method_119_119()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_119_119_OFFSET))(this);
		}

		static ::System::Object* Method_120_120(::System::Type* genericType, ::System::RuntimeType* genericArgument)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_120_120_OFFSET))(genericType, genericArgument);
		}

		static ::System::Type* Method_121_121(::System::Type* gt, ::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Type*(*)(::System::Type*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_121_121_OFFSET))(gt, types);
		}

		::System::IntPtr Method_122_122(::System::IntPtr namePtr, ::System::Reflection::BindingFlags bindingAttr, ::System::Boolean ignoreCase)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::Reflection::BindingFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_122_122_OFFSET))(this, namePtr, bindingAttr, ignoreCase);
		}

		::Il2CppArray<::System::Reflection::RuntimeMethodInfo*>* Method_123_123(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Boolean ignoreCase, ::System::RuntimeType* reflectedType)
		{
			return ((::Il2CppArray<::System::Reflection::RuntimeMethodInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Boolean, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_123_123_OFFSET))(this, name, bindingAttr, ignoreCase, reflectedType);
		}

		::System::IntPtr Method_124_124(::System::IntPtr name, ::System::Reflection::BindingFlags bindingAttr, ::System::Boolean icase)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::Reflection::BindingFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_124_124_OFFSET))(this, name, bindingAttr, icase);
		}

		::System::IntPtr Method_125_125(::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_125_125_OFFSET))(this, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::RuntimeConstructorInfo*>* Method_126_126(::System::Reflection::BindingFlags bindingAttr, ::System::RuntimeType* reflectedType)
		{
			return ((::Il2CppArray<::System::Reflection::RuntimeConstructorInfo*>*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_126_126_OFFSET))(this, bindingAttr, reflectedType);
		}

		::Il2CppArray<::System::Reflection::RuntimePropertyInfo*>* Method_127_127(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Boolean icase, ::System::RuntimeType* reflectedType)
		{
			return ((::Il2CppArray<::System::Reflection::RuntimePropertyInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Boolean, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_127_127_OFFSET))(this, name, bindingAttr, icase, reflectedType);
		}

		::System::Reflection::InterfaceMapping Method_128_128(::System::Type* ifaceType)
		{
			return ((::System::Reflection::InterfaceMapping(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_128_128_OFFSET))(this, ifaceType);
		}

		static ::System::Void Method_129_129(::System::Type* t, ::System::Type* iface, ::Il2CppArray<::System::Reflection::MethodInfo*>*& targets, ::Il2CppArray<::System::Reflection::MethodInfo*>*& methods)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Type*, ::Il2CppArray<::System::Reflection::MethodInfo*>*&, ::Il2CppArray<::System::Reflection::MethodInfo*>*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_129_129_OFFSET))(t, iface, targets, methods);
		}

		::System::Guid Method_130_130()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_130_130_OFFSET))(this);
		}

		::System::Void Method_131_131(::System::Int32& packing, ::System::Int32& size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_131_131_OFFSET))(this, packing, size);
		}

		static ::System::Type* Method_132_132(::System::Guid clsid, ::System::String* server, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::Guid, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_132_132_OFFSET))(clsid, server, throwOnError);
		}

		::System::TypeCode Method_133_133()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_133_133_OFFSET))(this);
		}

		static ::System::TypeCode Method_134_134(::System::Type* type)
		{
			return ((::System::TypeCode(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_134_134_OFFSET))(type);
		}

		static ::System::Type* Method_135_135(::System::String* progID, ::System::String* server, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_135_135_OFFSET))(progID, server, throwOnError);
		}

		::System::String* Method_136_136()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_136_136_OFFSET))(this);
		}

		static ::System::Object* Method_137_137(::System::Type* type)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_137_137_OFFSET))(type);
		}

		::System::Reflection::MethodBase* Method_138_138()
		{
			return ((::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_138_138_OFFSET))(this);
		}

		::System::String* Method_139_139(::System::Boolean full_name, ::System::Boolean assembly_qualified)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_139_139_OFFSET))(this, full_name, assembly_qualified);
		}

		::Il2CppArray<::System::Type*>* Method_140_140(::System::Boolean runtimeArray)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_140_140_OFFSET))(this, runtimeArray);
		}

		::System::Reflection::GenericParameterAttributes Method_141_141()
		{
			return ((::System::Reflection::GenericParameterAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_141_141_OFFSET))(this);
		}

		::System::Int32 Method_142_142()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_142_142_OFFSET))(this);
		}

		::System::IntPtr Method_143_143(::System::IntPtr name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_143_143_OFFSET))(this, name, bindingAttr);
		}

		::System::IntPtr Method_144_144(::System::IntPtr name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_144_144_OFFSET))(this, name, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::RuntimeFieldInfo*>* Method_145_145(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::RuntimeType* reflectedType)
		{
			return ((::Il2CppArray<::System::Reflection::RuntimeFieldInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_145_145_OFFSET))(this, name, bindingAttr, reflectedType);
		}

		::Il2CppArray<::System::Reflection::RuntimeEventInfo*>* Method_146_146(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::RuntimeType* reflectedType)
		{
			return ((::Il2CppArray<::System::Reflection::RuntimeEventInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_146_146_OFFSET))(this, name, bindingAttr, reflectedType);
		}

		::Il2CppArray<::System::Type*>* Method_147_147()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_147_147_OFFSET))(this);
		}

		::System::IntPtr Method_148_148(::System::IntPtr name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_148_148_OFFSET))(this, name, bindingAttr);
		}

		::Il2CppArray<::System::RuntimeType*>* Method_149_149(::System::String* displayName, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::RuntimeType*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_149_149_OFFSET))(this, displayName, bindingAttr);
		}

		::System::String* Method_150_150()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_150_150_OFFSET))(this);
		}

		::System::Type* Method_151_151()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_151_151_OFFSET))(this);
		}

		::System::String* Method_152_152()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_152_152_OFFSET))(this);
		}

		::System::String* Method_153_153()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_153_153_OFFSET))(this);
		}

		::System::Int32 Method_154_154()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_154_154_OFFSET))(this);
		}

		::System::String* Method_155_155()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_155_155_OFFSET))(this);
		}

		::System::Boolean Method_156_156()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_156_156_OFFSET))(this);
		}

		::System::Boolean Method_157_157()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_METHOD_157_157_OFFSET))(this);
		}
	};
}
