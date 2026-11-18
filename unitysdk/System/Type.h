#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/CallingConventions.h"
#include "unitysdk/System/Reflection/GenericParameterAttributes.h"
#include "unitysdk/System/Reflection/MemberInfo.h"
#include "unitysdk/System/Reflection/MemberTypes.h"
#include "unitysdk/System/Reflection/TypeAttributes.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
#include "unitysdk/System/TypeCode.h"
#include "unitysdk/System/Reflection/InterfaceMapping.h"
#include "unitysdk/System/Reflection/ParameterModifier.h"
#include "unitysdk/System/Guid.h"

namespace System { class Array; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class AssemblyName; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class EventInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberFilter; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }
namespace System::Reflection { class TypeFilter; }
namespace System::Runtime::InteropServices { class StructLayoutAttribute; }

#define SYSTEM_TYPE_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1D786E60)
#define SYSTEM_TYPE_METHOD_100_100_OFFSET UNITYSDK_OFFSET(0x1D789910)
#define SYSTEM_TYPE_METHOD_101_101_OFFSET UNITYSDK_OFFSET(0x1D789930)
#define SYSTEM_TYPE_METHOD_102_102_OFFSET UNITYSDK_OFFSET(0x1D789950)
#define SYSTEM_TYPE_METHOD_103_103_OFFSET UNITYSDK_OFFSET(0x1D789970)
#define SYSTEM_TYPE_METHOD_104_104_OFFSET UNITYSDK_OFFSET(0x1D789990)
#define SYSTEM_TYPE_METHOD_105_105_OFFSET UNITYSDK_OFFSET(0x1D7899B0)
#define SYSTEM_TYPE_METHOD_106_106_OFFSET UNITYSDK_OFFSET(0x1D77A910)
#define SYSTEM_TYPE_METHOD_107_107_OFFSET UNITYSDK_OFFSET(0x1D7801C0)
#define SYSTEM_TYPE_METHOD_108_108_OFFSET UNITYSDK_OFFSET(0x1D780C10)
#define SYSTEM_TYPE_METHOD_109_109_OFFSET UNITYSDK_OFFSET(0x1D7899F0)
#define SYSTEM_TYPE_METHOD_10_10_OFFSET UNITYSDK_OFFSET(0x1D786FC0)
#define SYSTEM_TYPE_METHOD_110_110_OFFSET UNITYSDK_OFFSET(0x1D789A10)
#define SYSTEM_TYPE_METHOD_111_111_OFFSET UNITYSDK_OFFSET(0x1D789A80)
#define SYSTEM_TYPE_METHOD_112_112_OFFSET UNITYSDK_OFFSET(0x1D789AA0)
#define SYSTEM_TYPE_METHOD_113_113_OFFSET UNITYSDK_OFFSET(0x1D789AC0)
#define SYSTEM_TYPE_METHOD_114_114_OFFSET UNITYSDK_OFFSET(0x1D789B80)
#define SYSTEM_TYPE_METHOD_115_115_OFFSET UNITYSDK_OFFSET(0x1D789BA0)
#define SYSTEM_TYPE_METHOD_116_116_OFFSET UNITYSDK_OFFSET(0x1D789BD0)
#define SYSTEM_TYPE_METHOD_117_117_OFFSET UNITYSDK_OFFSET(0x1D776440)
#define SYSTEM_TYPE_METHOD_118_118_OFFSET UNITYSDK_OFFSET(0x1D789C00)
#define SYSTEM_TYPE_METHOD_119_119_OFFSET UNITYSDK_OFFSET(0x1D789C10)
#define SYSTEM_TYPE_METHOD_11_11_OFFSET UNITYSDK_OFFSET(0x1D787010)
#define SYSTEM_TYPE_METHOD_120_120_OFFSET UNITYSDK_OFFSET(0x1D789C20)
#define SYSTEM_TYPE_METHOD_121_121_OFFSET UNITYSDK_OFFSET(0x1D789C30)
#define SYSTEM_TYPE_METHOD_122_122_OFFSET UNITYSDK_OFFSET(0x1D789C80)
#define SYSTEM_TYPE_METHOD_123_123_OFFSET UNITYSDK_OFFSET(0x1D789C90)
#define SYSTEM_TYPE_METHOD_124_124_OFFSET UNITYSDK_OFFSET(0x1D789CF0)
#define SYSTEM_TYPE_METHOD_125_125_OFFSET UNITYSDK_OFFSET(0x1D789E10)
#define SYSTEM_TYPE_METHOD_126_126_OFFSET UNITYSDK_OFFSET(0x1D775790)
#define SYSTEM_TYPE_METHOD_127_127_OFFSET UNITYSDK_OFFSET(0x1D774390)
#define SYSTEM_TYPE_METHOD_128_128_OFFSET UNITYSDK_OFFSET(0x1D77F470)
#define SYSTEM_TYPE_METHOD_129_129_OFFSET UNITYSDK_OFFSET(0x1D789EA0)
#define SYSTEM_TYPE_METHOD_12_12_OFFSET UNITYSDK_OFFSET(0x1D787060)
#define SYSTEM_TYPE_METHOD_130_130_OFFSET UNITYSDK_OFFSET(0x1D789EB0)
#define SYSTEM_TYPE_METHOD_131_131_OFFSET UNITYSDK_OFFSET(0x1D789EC0)
#define SYSTEM_TYPE_METHOD_132_132_OFFSET UNITYSDK_OFFSET(0x1D781A60)
#define SYSTEM_TYPE_METHOD_133_133_OFFSET UNITYSDK_OFFSET(0x1D789ED0)
#define SYSTEM_TYPE_METHOD_134_134_OFFSET UNITYSDK_OFFSET(0x1D789EE0)
#define SYSTEM_TYPE_METHOD_135_135_OFFSET UNITYSDK_OFFSET(0x1D789EF0)
#define SYSTEM_TYPE_METHOD_136_136_OFFSET UNITYSDK_OFFSET(0x1D789F00)
#define SYSTEM_TYPE_METHOD_13_13_OFFSET UNITYSDK_OFFSET(0x1D7870B0)
#define SYSTEM_TYPE_METHOD_143_143_OFFSET UNITYSDK_OFFSET(0x1D789F70)
#define SYSTEM_TYPE_METHOD_144_144_OFFSET UNITYSDK_OFFSET(0x1D789FC0)
#define SYSTEM_TYPE_METHOD_145_145_OFFSET UNITYSDK_OFFSET(0x1D78A010)
#define SYSTEM_TYPE_METHOD_146_146_OFFSET UNITYSDK_OFFSET(0x1D78A070)
#define SYSTEM_TYPE_METHOD_147_147_OFFSET UNITYSDK_OFFSET(0x1D78A0D0)
#define SYSTEM_TYPE_METHOD_148_148_OFFSET UNITYSDK_OFFSET(0x1D78A130)
#define SYSTEM_TYPE_METHOD_14_14_OFFSET UNITYSDK_OFFSET(0x1D787100)
#define SYSTEM_TYPE_METHOD_150_150_OFFSET UNITYSDK_OFFSET(0x1D78A140)
#define SYSTEM_TYPE_METHOD_151_151_OFFSET UNITYSDK_OFFSET(0x1D78A1A0)
#define SYSTEM_TYPE_METHOD_152_152_OFFSET UNITYSDK_OFFSET(0x1D78A200)
#define SYSTEM_TYPE_METHOD_154_154_OFFSET UNITYSDK_OFFSET(0x1D77F400)
#define SYSTEM_TYPE_METHOD_155_155_OFFSET UNITYSDK_OFFSET(0x1D78A260)
#define SYSTEM_TYPE_METHOD_156_156_OFFSET UNITYSDK_OFFSET(0x1D78A8B0)
#define SYSTEM_TYPE_METHOD_157_157_OFFSET UNITYSDK_OFFSET(0x1D78A950)
#define SYSTEM_TYPE_METHOD_158_158_OFFSET UNITYSDK_OFFSET(0x1D78A300)
#define SYSTEM_TYPE_METHOD_159_159_OFFSET UNITYSDK_OFFSET(0x1D78A980)
#define SYSTEM_TYPE_METHOD_15_15_OFFSET UNITYSDK_OFFSET(0x1D7871A0)
#define SYSTEM_TYPE_METHOD_160_160_OFFSET UNITYSDK_OFFSET(0x1D78AA70)
#define SYSTEM_TYPE_METHOD_161_161_OFFSET UNITYSDK_OFFSET(0x1D78B2B0)
#define SYSTEM_TYPE_METHOD_162_162_OFFSET UNITYSDK_OFFSET(0x1D78AEC0)
#define SYSTEM_TYPE_METHOD_163_163_OFFSET UNITYSDK_OFFSET(0x1D77CA90)
#define SYSTEM_TYPE_METHOD_164_164_OFFSET UNITYSDK_OFFSET(0x1D78B450)
#define SYSTEM_TYPE_METHOD_165_165_OFFSET UNITYSDK_OFFSET(0x1D78B4A0)
#define SYSTEM_TYPE_METHOD_166_166_OFFSET UNITYSDK_OFFSET(0x1D78B4F0)
#define SYSTEM_TYPE_METHOD_167_167_OFFSET UNITYSDK_OFFSET(0x1D78B540)
#define SYSTEM_TYPE_METHOD_169_169_OFFSET UNITYSDK_OFFSET(0x1D78B670)
#define SYSTEM_TYPE_METHOD_16_16_OFFSET UNITYSDK_OFFSET(0x1D787240)
#define SYSTEM_TYPE_METHOD_170_170_OFFSET UNITYSDK_OFFSET(0x1D78B6C0)
#define SYSTEM_TYPE_METHOD_171_171_OFFSET UNITYSDK_OFFSET(0x1D78B700)
#define SYSTEM_TYPE_METHOD_172_172_OFFSET UNITYSDK_OFFSET(0x1D78BAD0)
#define SYSTEM_TYPE_METHOD_173_173_OFFSET UNITYSDK_OFFSET(0x1D78BA10)
#define SYSTEM_TYPE_METHOD_174_174_OFFSET UNITYSDK_OFFSET(0x1D78BAE0)
#define SYSTEM_TYPE_METHOD_175_175_OFFSET UNITYSDK_OFFSET(0x1D78BB00)
#define SYSTEM_TYPE_METHOD_176_176_OFFSET UNITYSDK_OFFSET(0x1D78BB50)
#define SYSTEM_TYPE_METHOD_177_177_OFFSET UNITYSDK_OFFSET(0x1D78BBA0)
#define SYSTEM_TYPE_METHOD_178_178_OFFSET UNITYSDK_OFFSET(0x1D78BD30)
#define SYSTEM_TYPE_METHOD_179_179_OFFSET UNITYSDK_OFFSET(0x1D78BD80)
#define SYSTEM_TYPE_METHOD_17_17_OFFSET UNITYSDK_OFFSET(0x1D7872E0)
#define SYSTEM_TYPE_METHOD_180_180_OFFSET UNITYSDK_OFFSET(0x1D774380)
#define SYSTEM_TYPE_METHOD_181_181_OFFSET UNITYSDK_OFFSET(0x1D7754B0)
#define SYSTEM_TYPE_METHOD_182_182_OFFSET UNITYSDK_OFFSET(0x1D78BDC0)
#define SYSTEM_TYPE_METHOD_183_183_OFFSET UNITYSDK_OFFSET(0x1D78BE20)
#define SYSTEM_TYPE_METHOD_184_184_OFFSET UNITYSDK_OFFSET(0x1D780290)
#define SYSTEM_TYPE_METHOD_185_185_OFFSET UNITYSDK_OFFSET(0x1D78BE80)
#define SYSTEM_TYPE_METHOD_186_186_OFFSET UNITYSDK_OFFSET(0x1D78BED0)
#define SYSTEM_TYPE_METHOD_187_187_OFFSET UNITYSDK_OFFSET(0x1D78BF20)
#define SYSTEM_TYPE_METHOD_188_188_OFFSET UNITYSDK_OFFSET(0x1D78BF70)
#define SYSTEM_TYPE_METHOD_189_189_OFFSET UNITYSDK_OFFSET(0x1D78BFC0)
#define SYSTEM_TYPE_METHOD_18_18_OFFSET UNITYSDK_OFFSET(0x1D787380)
#define SYSTEM_TYPE_METHOD_190_190_OFFSET UNITYSDK_OFFSET(0x1D78C010)
#define SYSTEM_TYPE_METHOD_191_191_OFFSET UNITYSDK_OFFSET(0x1D761680)
#define SYSTEM_TYPE_METHOD_192_192_OFFSET UNITYSDK_OFFSET(0x1D78C140)
#define SYSTEM_TYPE_METHOD_193_193_OFFSET UNITYSDK_OFFSET(0x1D78C020)
#define SYSTEM_TYPE_METHOD_194_194_OFFSET UNITYSDK_OFFSET(0x1D78C190)
#define SYSTEM_TYPE_METHOD_195_195_OFFSET UNITYSDK_OFFSET(0x1D78C400)
#define SYSTEM_TYPE_METHOD_196_196_OFFSET UNITYSDK_OFFSET(0x1D78C410)
#define SYSTEM_TYPE_METHOD_197_197_OFFSET UNITYSDK_OFFSET(0x1D78C460)
#define SYSTEM_TYPE_METHOD_198_198_OFFSET UNITYSDK_OFFSET(0x1D78C470)
#define SYSTEM_TYPE_METHOD_199_199_OFFSET UNITYSDK_OFFSET(0x1D78C4C0)
#define SYSTEM_TYPE_METHOD_19_19_OFFSET UNITYSDK_OFFSET(0x1D787420)
#define SYSTEM_TYPE_METHOD_1_1_OFFSET UNITYSDK_OFFSET(0x1D78C580)
#define SYSTEM_TYPE_METHOD_200_200_OFFSET UNITYSDK_OFFSET(0x1D78C510)
#define SYSTEM_TYPE_METHOD_201_201_OFFSET UNITYSDK_OFFSET(0x1D767A40)
#define SYSTEM_TYPE_METHOD_202_202_OFFSET UNITYSDK_OFFSET(0x1D78C560)
#define SYSTEM_TYPE_METHOD_20_20_OFFSET UNITYSDK_OFFSET(0x1D7874C0)
#define SYSTEM_TYPE_METHOD_21_21_OFFSET UNITYSDK_OFFSET(0x1D787560)
#define SYSTEM_TYPE_METHOD_22_22_OFFSET UNITYSDK_OFFSET(0x1D781790)
#define SYSTEM_TYPE_METHOD_23_23_OFFSET UNITYSDK_OFFSET(0x1D787600)
#define SYSTEM_TYPE_METHOD_25_25_OFFSET UNITYSDK_OFFSET(0x1D779C00)
#define SYSTEM_TYPE_METHOD_26_26_OFFSET UNITYSDK_OFFSET(0x1D787670)
#define SYSTEM_TYPE_METHOD_28_28_OFFSET UNITYSDK_OFFSET(0x1D7876E0)
#define SYSTEM_TYPE_METHOD_29_29_OFFSET UNITYSDK_OFFSET(0x1D787720)
#define SYSTEM_TYPE_METHOD_2_2_OFFSET UNITYSDK_OFFSET(0x1D786E70)
#define SYSTEM_TYPE_METHOD_32_32_OFFSET UNITYSDK_OFFSET(0x1D787750)
#define SYSTEM_TYPE_METHOD_33_33_OFFSET UNITYSDK_OFFSET(0x1D7877A0)
#define SYSTEM_TYPE_METHOD_34_34_OFFSET UNITYSDK_OFFSET(0x1D7877B0)
#define SYSTEM_TYPE_METHOD_38_38_OFFSET UNITYSDK_OFFSET(0x1D787870)
#define SYSTEM_TYPE_METHOD_3_3_OFFSET UNITYSDK_OFFSET(0x1D786E80)
#define SYSTEM_TYPE_METHOD_40_40_OFFSET UNITYSDK_OFFSET(0x1D7808B0)
#define SYSTEM_TYPE_METHOD_41_41_OFFSET UNITYSDK_OFFSET(0x1D7878D0)
#define SYSTEM_TYPE_METHOD_42_42_OFFSET UNITYSDK_OFFSET(0x1D7879D0)
#define SYSTEM_TYPE_METHOD_44_44_OFFSET UNITYSDK_OFFSET(0x1D787A00)
#define SYSTEM_TYPE_METHOD_46_46_OFFSET UNITYSDK_OFFSET(0x1D787A20)
#define SYSTEM_TYPE_METHOD_47_47_OFFSET UNITYSDK_OFFSET(0x1D787A60)
#define SYSTEM_TYPE_METHOD_48_48_OFFSET UNITYSDK_OFFSET(0x1D787BB0)
#define SYSTEM_TYPE_METHOD_49_49_OFFSET UNITYSDK_OFFSET(0x1D787D00)
#define SYSTEM_TYPE_METHOD_4_4_OFFSET UNITYSDK_OFFSET(0x1D786E90)
#define SYSTEM_TYPE_METHOD_50_50_OFFSET UNITYSDK_OFFSET(0x1D787E40)
#define SYSTEM_TYPE_METHOD_51_51_OFFSET UNITYSDK_OFFSET(0x1D787F70)
#define SYSTEM_TYPE_METHOD_52_52_OFFSET UNITYSDK_OFFSET(0x1D788010)
#define SYSTEM_TYPE_METHOD_54_54_OFFSET UNITYSDK_OFFSET(0x1D7880B0)
#define SYSTEM_TYPE_METHOD_57_57_OFFSET UNITYSDK_OFFSET(0x1D7880D0)
#define SYSTEM_TYPE_METHOD_58_58_OFFSET UNITYSDK_OFFSET(0x1D7880F0)
#define SYSTEM_TYPE_METHOD_5_5_OFFSET UNITYSDK_OFFSET(0x1D786EA0)
#define SYSTEM_TYPE_METHOD_60_60_OFFSET UNITYSDK_OFFSET(0x1D788110)
#define SYSTEM_TYPE_METHOD_63_63_OFFSET UNITYSDK_OFFSET(0x1D788130)
#define SYSTEM_TYPE_METHOD_64_64_OFFSET UNITYSDK_OFFSET(0x1D788370)
#define SYSTEM_TYPE_METHOD_66_66_OFFSET UNITYSDK_OFFSET(0x1D788390)
#define SYSTEM_TYPE_METHOD_68_68_OFFSET UNITYSDK_OFFSET(0x1D7883B0)
#define SYSTEM_TYPE_METHOD_69_69_OFFSET UNITYSDK_OFFSET(0x1D7884A0)
#define SYSTEM_TYPE_METHOD_6_6_OFFSET UNITYSDK_OFFSET(0x1D786EB0)
#define SYSTEM_TYPE_METHOD_70_70_OFFSET UNITYSDK_OFFSET(0x1D788590)
#define SYSTEM_TYPE_METHOD_71_71_OFFSET UNITYSDK_OFFSET(0x1D788620)
#define SYSTEM_TYPE_METHOD_72_72_OFFSET UNITYSDK_OFFSET(0x1D7886F0)
#define SYSTEM_TYPE_METHOD_73_73_OFFSET UNITYSDK_OFFSET(0x1D7887C0)
#define SYSTEM_TYPE_METHOD_74_74_OFFSET UNITYSDK_OFFSET(0x1D788890)
#define SYSTEM_TYPE_METHOD_75_75_OFFSET UNITYSDK_OFFSET(0x1D788960)
#define SYSTEM_TYPE_METHOD_78_78_OFFSET UNITYSDK_OFFSET(0x1D7889F0)
#define SYSTEM_TYPE_METHOD_79_79_OFFSET UNITYSDK_OFFSET(0x1D788A10)
#define SYSTEM_TYPE_METHOD_7_7_OFFSET UNITYSDK_OFFSET(0x1D786EF0)
#define SYSTEM_TYPE_METHOD_81_81_OFFSET UNITYSDK_OFFSET(0x1D788A30)
#define SYSTEM_TYPE_METHOD_83_83_OFFSET UNITYSDK_OFFSET(0x1D77D830)
#define SYSTEM_TYPE_METHOD_84_84_OFFSET UNITYSDK_OFFSET(0x1D788A50)
#define SYSTEM_TYPE_METHOD_85_85_OFFSET UNITYSDK_OFFSET(0x1D788A80)
#define SYSTEM_TYPE_METHOD_86_86_OFFSET UNITYSDK_OFFSET(0x1D788AE0)
#define SYSTEM_TYPE_METHOD_88_88_OFFSET UNITYSDK_OFFSET(0x1D788B00)
#define SYSTEM_TYPE_METHOD_89_89_OFFSET UNITYSDK_OFFSET(0x1D788B50)
#define SYSTEM_TYPE_METHOD_8_8_OFFSET UNITYSDK_OFFSET(0x1D786F30)
#define SYSTEM_TYPE_METHOD_90_90_OFFSET UNITYSDK_OFFSET(0x1D77F450)
#define SYSTEM_TYPE_METHOD_91_91_OFFSET UNITYSDK_OFFSET(0x1D789710)
#define SYSTEM_TYPE_METHOD_92_92_OFFSET UNITYSDK_OFFSET(0x1D789720)
#define SYSTEM_TYPE_METHOD_93_93_OFFSET UNITYSDK_OFFSET(0x1D789770)
#define SYSTEM_TYPE_METHOD_94_94_OFFSET UNITYSDK_OFFSET(0x1D77F4D0)
#define SYSTEM_TYPE_METHOD_95_95_OFFSET UNITYSDK_OFFSET(0x1D7760D0)
#define SYSTEM_TYPE_METHOD_96_96_OFFSET UNITYSDK_OFFSET(0x1D7760B0)
#define SYSTEM_TYPE_METHOD_97_97_OFFSET UNITYSDK_OFFSET(0x1D7898D0)
#define SYSTEM_TYPE_METHOD_98_98_OFFSET UNITYSDK_OFFSET(0x1D7898F0)
#define SYSTEM_TYPE_METHOD_99_99_OFFSET UNITYSDK_OFFSET(0x1D7760F0)
#define SYSTEM_TYPE_METHOD_9_9_OFFSET UNITYSDK_OFFSET(0x1D786F70)

namespace System
{
	inline static constexpr unsigned int Type_TypeDefinitionIndex = 339;

	class Type : public ::System::Reflection::MemberInfo
	{
	public:
		static ::System::Reflection::Binder** StaticGet_Field_0()
		{
			return (::System::Reflection::Binder**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x5E0);
		}
		static ::System::Reflection::MemberFilter** StaticGet_Field_1()
		{
			return (::System::Reflection::MemberFilter**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x5E8);
		}
		static ::Il2CppArray<::System::Type*>** StaticGet_Field_2()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x5F0);
		}
		static ::System::Reflection::MemberFilter** StaticGet_Field_3()
		{
			return (::System::Reflection::MemberFilter**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x5F8);
		}
		static ::System::Object** StaticGet_Field_4()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x600);
		}
		static ::System::Reflection::MemberFilter** StaticGet_Field_5()
		{
			return (::System::Reflection::MemberFilter**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x608);
		}
		static ::System::Char* StaticGet_Field_6()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0x140);
		}
		// static const ::System::Reflection::BindingFlags Field_7 = 0x1C; // 0x0
		// static const ::System::Reflection::BindingFlags Field_8 = 0x3E; // 0x0
		::System::RuntimeTypeHandle Field_9; // 0x10

		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_0_OFFSET))(this);
		}

		static ::System::Void Method_1_1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_1_1_OFFSET))();
		}

		::System::Reflection::MemberTypes Method_2_2()
		{
			return ((::System::Reflection::MemberTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_2_2_OFFSET))(this);
		}

		::System::Type* Method_3_3()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_3_3_OFFSET))(this);
		}

		::System::Reflection::MethodBase* Method_4_4()
		{
			return ((::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_4_4_OFFSET))(this);
		}

		::System::Type* Method_5_5()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_5_5_OFFSET))(this);
		}

		static ::System::Type* Method_6_6(::System::String* typeName, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* assemblyResolver, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>* typeResolver)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_6_6_OFFSET))(typeName, assemblyResolver, typeResolver);
		}

		static ::System::Type* Method_7_7(::System::String* typeName, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* assemblyResolver, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>* typeResolver, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_7_7_OFFSET))(typeName, assemblyResolver, typeResolver, throwOnError);
		}

		static ::System::Type* Method_8_8(::System::String* typeName, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* assemblyResolver, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>* typeResolver, ::System::Boolean throwOnError, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_8_8_OFFSET))(typeName, assemblyResolver, typeResolver, throwOnError, ignoreCase);
		}

		::System::Type* Method_9_9()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_9_9_OFFSET))(this);
		}

		::System::Runtime::InteropServices::StructLayoutAttribute* Method_10_10()
		{
			return ((::System::Runtime::InteropServices::StructLayoutAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_10_10_OFFSET))(this);
		}

		::System::Type* Method_11_11()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_11_11_OFFSET))(this);
		}

		::System::Type* Method_12_12()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_12_12_OFFSET))(this);
		}

		::System::Type* Method_13_13(::System::Int32 rank)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_13_13_OFFSET))(this, rank);
		}

		static ::System::Type* Method_14_14(::System::String* progID)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_14_14_OFFSET))(progID);
		}

		static ::System::Type* Method_15_15(::System::String* progID, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_15_15_OFFSET))(progID, throwOnError);
		}

		static ::System::Type* Method_16_16(::System::String* progID, ::System::String* server)
		{
			return ((::System::Type*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_16_16_OFFSET))(progID, server);
		}

		static ::System::Type* Method_17_17(::System::String* progID, ::System::String* server, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_17_17_OFFSET))(progID, server, throwOnError);
		}

		static ::System::Type* Method_18_18(::System::Guid clsid)
		{
			return ((::System::Type*(*)(::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_18_18_OFFSET))(clsid);
		}

		static ::System::Type* Method_19_19(::System::Guid clsid, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::Guid, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_19_19_OFFSET))(clsid, throwOnError);
		}

		static ::System::Type* Method_20_20(::System::Guid clsid, ::System::String* server)
		{
			return ((::System::Type*(*)(::System::Guid, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_20_20_OFFSET))(clsid, server);
		}

		static ::System::Type* Method_21_21(::System::Guid clsid, ::System::String* server, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::Guid, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_21_21_OFFSET))(clsid, server, throwOnError);
		}

		static ::System::TypeCode Method_22_22(::System::Type* type)
		{
			return ((::System::TypeCode(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_22_22_OFFSET))(type);
		}

		::System::TypeCode Method_23_23()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_23_23_OFFSET))(this);
		}

		static ::System::Reflection::Binder* Method_25_25()
		{
			return ((::System::Reflection::Binder*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_25_25_OFFSET))();
		}

		static ::System::Void Method_26_26()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_26_26_OFFSET))();
		}

		::System::Object* Method_28_28(::System::String* name, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Object* target, ::Il2CppArray<::System::Object*>* args, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_28_28_OFFSET))(this, name, invokeAttr, binder, target, args, culture);
		}

		::System::Object* Method_29_29(::System::String* name, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Object* target, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_29_29_OFFSET))(this, name, invokeAttr, binder, target, args);
		}

		::System::RuntimeTypeHandle Method_32_32()
		{
			return ((::System::RuntimeTypeHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_32_32_OFFSET))(this);
		}

		::System::RuntimeTypeHandle Method_33_33()
		{
			return ((::System::RuntimeTypeHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_33_33_OFFSET))(this);
		}

		static ::System::RuntimeTypeHandle Method_34_34(::System::Object* o)
		{
			return ((::System::RuntimeTypeHandle(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_34_34_OFFSET))(o);
		}

		::System::Int32 Method_38_38()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_38_38_OFFSET))(this);
		}

		::System::Reflection::ConstructorInfo* Method_40_40(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Reflection::CallingConventions callConvention, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_40_40_OFFSET))(this, bindingAttr, binder, callConvention, types, modifiers);
		}

		::System::Reflection::ConstructorInfo* Method_41_41(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_41_41_OFFSET))(this, bindingAttr, binder, types, modifiers);
		}

		::System::Reflection::ConstructorInfo* Method_42_42(::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_42_42_OFFSET))(this, types);
		}

		::Il2CppArray<::System::Reflection::ConstructorInfo*>* Method_44_44()
		{
			return ((::Il2CppArray<::System::Reflection::ConstructorInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_44_44_OFFSET))(this);
		}

		::System::Reflection::ConstructorInfo* Method_46_46()
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_46_46_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_47_47(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Reflection::CallingConventions callConvention, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_47_47_OFFSET))(this, name, bindingAttr, binder, callConvention, types, modifiers);
		}

		::System::Reflection::MethodInfo* Method_48_48(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_48_48_OFFSET))(this, name, bindingAttr, binder, types, modifiers);
		}

		::System::Reflection::MethodInfo* Method_49_49(::System::String* name, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_49_49_OFFSET))(this, name, types, modifiers);
		}

		::System::Reflection::MethodInfo* Method_50_50(::System::String* name, ::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_50_50_OFFSET))(this, name, types);
		}

		::System::Reflection::MethodInfo* Method_51_51(::System::String* name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_51_51_OFFSET))(this, name, bindingAttr);
		}

		::System::Reflection::MethodInfo* Method_52_52(::System::String* name)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_52_52_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::MethodInfo*>* Method_54_54()
		{
			return ((::Il2CppArray<::System::Reflection::MethodInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_54_54_OFFSET))(this);
		}

		::System::Reflection::FieldInfo* Method_57_57(::System::String* name)
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_57_57_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::FieldInfo*>* Method_58_58()
		{
			return ((::Il2CppArray<::System::Reflection::FieldInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_58_58_OFFSET))(this);
		}

		::System::Type* Method_60_60(::System::String* name)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_60_60_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Type*>* Method_63_63(::System::Reflection::TypeFilter* filter, ::System::Object* filterCriteria)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID, ::System::Reflection::TypeFilter*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_63_63_OFFSET))(this, filter, filterCriteria);
		}

		::System::Reflection::EventInfo* Method_64_64(::System::String* name)
		{
			return ((::System::Reflection::EventInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_64_64_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::EventInfo*>* Method_66_66()
		{
			return ((::Il2CppArray<::System::Reflection::EventInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_66_66_OFFSET))(this);
		}

		::System::Reflection::PropertyInfo* Method_68_68(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Type* returnType, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_68_68_OFFSET))(this, name, bindingAttr, binder, returnType, types, modifiers);
		}

		::System::Reflection::PropertyInfo* Method_69_69(::System::String* name, ::System::Type* returnType, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_69_69_OFFSET))(this, name, returnType, types, modifiers);
		}

		::System::Reflection::PropertyInfo* Method_70_70(::System::String* name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_70_70_OFFSET))(this, name, bindingAttr);
		}

		::System::Reflection::PropertyInfo* Method_71_71(::System::String* name, ::System::Type* returnType, ::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Type*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_71_71_OFFSET))(this, name, returnType, types);
		}

		::System::Reflection::PropertyInfo* Method_72_72(::System::String* name, ::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_72_72_OFFSET))(this, name, types);
		}

		::System::Reflection::PropertyInfo* Method_73_73(::System::String* name, ::System::Type* returnType)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_73_73_OFFSET))(this, name, returnType);
		}

		::System::Reflection::PropertyInfo* Method_74_74(::System::String* name, ::System::Reflection::BindingFlags bindingAttr, ::System::Type* returnType)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_74_74_OFFSET))(this, name, bindingAttr, returnType);
		}

		::System::Reflection::PropertyInfo* Method_75_75(::System::String* name)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_75_75_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::PropertyInfo*>* Method_78_78()
		{
			return ((::Il2CppArray<::System::Reflection::PropertyInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_78_78_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* Method_79_79()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_79_79_OFFSET))(this);
		}

		::System::Type* Method_81_81(::System::String* name)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_81_81_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* Method_83_83(::System::String* name)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_83_83_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* Method_84_84(::System::String* name, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_84_84_OFFSET))(this, name, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* Method_85_85(::System::String* name, ::System::Reflection::MemberTypes type, ::System::Reflection::BindingFlags bindingAttr)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::String*, ::System::Reflection::MemberTypes, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_85_85_OFFSET))(this, name, type, bindingAttr);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* Method_86_86()
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_86_86_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* Method_88_88()
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_88_88_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::MemberInfo*>* Method_89_89(::System::Reflection::MemberTypes memberType, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::MemberFilter* filter, ::System::Object* filterCriteria)
		{
			return ((::Il2CppArray<::System::Reflection::MemberInfo*>*(*)(::PVOID, ::System::Reflection::MemberTypes, ::System::Reflection::BindingFlags, ::System::Reflection::MemberFilter*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_89_89_OFFSET))(this, memberType, bindingAttr, filter, filterCriteria);
		}

		::System::Boolean Method_90_90()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_90_90_OFFSET))(this);
		}

		::System::Reflection::TypeAttributes Method_91_91()
		{
			return ((::System::Reflection::TypeAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_91_91_OFFSET))(this);
		}

		::System::Reflection::GenericParameterAttributes Method_92_92()
		{
			return ((::System::Reflection::GenericParameterAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_92_92_OFFSET))(this);
		}

		::System::Boolean Method_93_93()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_93_93_OFFSET))(this);
		}

		::System::Boolean Method_94_94()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_94_94_OFFSET))(this);
		}

		::System::Boolean Method_95_95()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_95_95_OFFSET))(this);
		}

		::System::Boolean Method_96_96()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_96_96_OFFSET))(this);
		}

		::System::Boolean Method_97_97()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_97_97_OFFSET))(this);
		}

		::System::Boolean Method_98_98()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_98_98_OFFSET))(this);
		}

		::System::Boolean Method_99_99()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_99_99_OFFSET))(this);
		}

		::System::Boolean Method_100_100()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_100_100_OFFSET))(this);
		}

		::System::Boolean Method_101_101()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_101_101_OFFSET))(this);
		}

		::System::Boolean Method_102_102()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_102_102_OFFSET))(this);
		}

		::System::Boolean Method_103_103()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_103_103_OFFSET))(this);
		}

		::System::Boolean Method_104_104()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_104_104_OFFSET))(this);
		}

		::System::Boolean Method_105_105()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_105_105_OFFSET))(this);
		}

		::System::Boolean Method_106_106()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_106_106_OFFSET))(this);
		}

		::System::Boolean Method_107_107()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_107_107_OFFSET))(this);
		}

		::System::Boolean Method_108_108()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_108_108_OFFSET))(this);
		}

		::System::Boolean Method_109_109()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_109_109_OFFSET))(this);
		}

		::System::Boolean Method_110_110()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_110_110_OFFSET))(this);
		}

		::System::Boolean Method_111_111()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_111_111_OFFSET))(this);
		}

		::System::Boolean Method_112_112()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_112_112_OFFSET))(this);
		}

		::System::Boolean Method_113_113()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_113_113_OFFSET))(this);
		}

		::System::Boolean Method_114_114()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_114_114_OFFSET))(this);
		}

		::System::Boolean Method_115_115()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_115_115_OFFSET))(this);
		}

		::System::Boolean Method_116_116()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_116_116_OFFSET))(this);
		}

		::System::Boolean Method_117_117()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_117_117_OFFSET))(this);
		}

		::System::Boolean Method_118_118()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_118_118_OFFSET))(this);
		}

		::System::Boolean Method_119_119()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_119_119_OFFSET))(this);
		}

		::System::Boolean Method_120_120()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_120_120_OFFSET))(this);
		}

		::System::Boolean Method_121_121()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_121_121_OFFSET))(this);
		}

		::System::Boolean Method_122_122()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_122_122_OFFSET))(this);
		}

		::System::Int32 Method_123_123()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_123_123_OFFSET))(this);
		}

		::System::Boolean Method_124_124()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_124_124_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* Method_125_125()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_125_125_OFFSET))(this);
		}

		::System::Boolean Method_126_126()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_126_126_OFFSET))(this);
		}

		::System::Boolean Method_127_127()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_127_127_OFFSET))(this);
		}

		::System::Boolean Method_128_128()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_128_128_OFFSET))(this);
		}

		::System::Boolean Method_129_129()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_129_129_OFFSET))(this);
		}

		::System::Boolean Method_130_130()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_130_130_OFFSET))(this);
		}

		::System::Boolean Method_131_131()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_131_131_OFFSET))(this);
		}

		::System::Boolean Method_132_132()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_132_132_OFFSET))(this);
		}

		::System::Boolean Method_133_133()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_133_133_OFFSET))(this);
		}

		::System::Boolean Method_134_134()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_134_134_OFFSET))(this);
		}

		::System::Boolean Method_135_135()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_135_135_OFFSET))(this);
		}

		::System::Boolean Method_136_136()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_136_136_OFFSET))(this);
		}

		::System::Boolean Method_143_143()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_143_143_OFFSET))(this);
		}

		::System::Boolean Method_144_144()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_144_144_OFFSET))(this);
		}

		::System::Type* Method_145_145(::Il2CppArray<::System::Type*>* typeArguments)
		{
			return ((::System::Type*(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_145_145_OFFSET))(this, typeArguments);
		}

		::System::Boolean Method_146_146()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_146_146_OFFSET))(this);
		}

		::System::Boolean Method_147_147()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_147_147_OFFSET))(this);
		}

		::System::Boolean Method_148_148()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_148_148_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* Method_150_150()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_150_150_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* Method_151_151()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_151_151_OFFSET))(this);
		}

		::System::Type* Method_152_152()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_152_152_OFFSET))(this);
		}

		::System::Type* Method_154_154()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_154_154_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* Method_155_155()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_155_155_OFFSET))(this);
		}

		::System::Array* Method_156_156()
		{
			return ((::System::Array*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_156_156_OFFSET))(this);
		}

		::System::Array* Method_157_157()
		{
			return ((::System::Array*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_157_157_OFFSET))(this);
		}

		::System::Void Method_158_158(::Il2CppArray<::System::String*>*& enumNames, ::System::Array*& enumValues)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*&, ::System::Array*&))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_158_158_OFFSET))(this, enumNames, enumValues);
		}

		::System::Type* Method_159_159()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_159_159_OFFSET))(this);
		}

		::System::Boolean Method_160_160(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_160_160_OFFSET))(this, value);
		}

		::System::String* Method_161_161(::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_161_161_OFFSET))(this, value);
		}

		static ::System::Int32 Method_162_162(::System::Array* array, ::System::Object* value)
		{
			return ((::System::Int32(*)(::System::Array*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_162_162_OFFSET))(array, value);
		}

		static ::System::Boolean Method_163_163(::System::Type* t)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_163_163_OFFSET))(t);
		}

		::System::Boolean Method_164_164()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_164_164_OFFSET))(this);
		}

		::System::Boolean Method_165_165()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_165_165_OFFSET))(this);
		}

		::System::Boolean Method_166_166()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_166_166_OFFSET))(this);
		}

		::System::Boolean Method_167_167()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_167_167_OFFSET))(this);
		}

		::System::Boolean Method_169_169(::System::Type* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_169_169_OFFSET))(this, c);
		}

		::System::Boolean Method_170_170(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_170_170_OFFSET))(this, o);
		}

		::System::Boolean Method_171_171(::System::Type* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_171_171_OFFSET))(this, c);
		}

		::System::Boolean Method_172_172(::System::Type* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_172_172_OFFSET))(this, other);
		}

		::System::Boolean Method_173_173(::System::Type* ifaceType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_173_173_OFFSET))(this, ifaceType);
		}

		::System::String* Method_174_174()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_174_174_OFFSET))(this);
		}

		::System::String* Method_175_175(::System::Boolean serialization)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_175_175_OFFSET))(this, serialization);
		}

		::System::String* Method_176_176()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_176_176_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Type*>* Method_177_177(::Il2CppArray<::System::Object*>* args)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_177_177_OFFSET))(args);
		}

		::System::Boolean Method_178_178(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_178_178_OFFSET))(this, o);
		}

		::System::Boolean Method_179_179(::System::Type* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_179_179_OFFSET))(this, o);
		}

		static ::System::Boolean Method_180_180(::System::Type* left, ::System::Type* right)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_180_180_OFFSET))(left, right);
		}

		static ::System::Boolean Method_181_181(::System::Type* left, ::System::Type* right)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_181_181_OFFSET))(left, right);
		}

		::System::Int32 Method_182_182()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_182_182_OFFSET))(this);
		}

		::System::Reflection::InterfaceMapping Method_183_183(::System::Type* interfaceType)
		{
			return ((::System::Reflection::InterfaceMapping(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_183_183_OFFSET))(this, interfaceType);
		}

		::System::Type* Method_184_184()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_184_184_OFFSET))(this);
		}

		::System::Void Method_185_185(::System::UInt32& pcTInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_185_185_OFFSET))(this, pcTInfo);
		}

		::System::Void Method_186_186(::System::UInt32 iTInfo, ::System::UInt32 lcid, ::System::IntPtr ppTInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_186_186_OFFSET))(this, iTInfo, lcid, ppTInfo);
		}

		::System::Void Method_187_187(::System::Guid& riid, ::System::IntPtr rgszNames, ::System::UInt32 cNames, ::System::UInt32 lcid, ::System::IntPtr rgDispId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid&, ::System::IntPtr, ::System::UInt32, ::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_187_187_OFFSET))(this, riid, rgszNames, cNames, lcid, rgDispId);
		}

		::System::Void Method_188_188(::System::UInt32 dispIdMember, ::System::Guid& riid, ::System::UInt32 lcid, ::System::Int16 wFlags, ::System::IntPtr pDispParams, ::System::IntPtr pVarResult, ::System::IntPtr pExcepInfo, ::System::IntPtr puArgErr)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Guid&, ::System::UInt32, ::System::Int16, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_188_188_OFFSET))(this, dispIdMember, riid, lcid, wFlags, pDispParams, pVarResult, pExcepInfo, puArgErr);
		}

		::System::Boolean Method_189_189()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_189_189_OFFSET))(this);
		}

		static ::System::Type* Method_190_190(::System::String* name, ::System::Boolean throwOnError, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_190_190_OFFSET))(name, throwOnError, ignoreCase);
		}

		static ::System::Type* Method_191_191(::System::String* typeName)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_191_191_OFFSET))(typeName);
		}

		static ::System::Type* Method_192_192(::System::String* typeName, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_192_192_OFFSET))(typeName, throwOnError);
		}

		static ::System::Type* Method_193_193(::System::String* typeName, ::System::Boolean throwOnError, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_193_193_OFFSET))(typeName, throwOnError, ignoreCase);
		}

		static ::System::Type* Method_194_194(::System::String* typeName, ::System::Boolean throwIfNotFound, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_194_194_OFFSET))(typeName, throwIfNotFound, ignoreCase);
		}

		::System::Type* Method_195_195()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_195_195_OFFSET))(this);
		}

		::System::Type* Method_196_196()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_196_196_OFFSET))(this);
		}

		::System::Boolean Method_197_197()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_197_197_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_198_198(::System::Reflection::MethodInfo* fromNoninstanciated)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_198_198_OFFSET))(this, fromNoninstanciated);
		}

		::System::Reflection::ConstructorInfo* Method_199_199(::System::Reflection::ConstructorInfo* fromNoninstanciated)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_199_199_OFFSET))(this, fromNoninstanciated);
		}

		::System::Reflection::FieldInfo* Method_200_200(::System::Reflection::FieldInfo* fromNoninstanciated)
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_200_200_OFFSET))(this, fromNoninstanciated);
		}

		static ::System::Type* Method_201_201(::System::RuntimeTypeHandle handle)
		{
			return ((::System::Type*(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_201_201_OFFSET))(handle);
		}

		static ::System::Type* Method_202_202(::System::IntPtr handle)
		{
			return ((::System::Type*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_TYPE_METHOD_202_202_OFFSET))(handle);
		}
	};
}
