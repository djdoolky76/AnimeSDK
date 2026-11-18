#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/AssemblyNameFlags.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace System { class Version; }
namespace System::Globalization { class CultureInfo; }
namespace System::IO { class Stream; }
namespace System::Reflection { class AssemblyName; }
namespace System::Reflection { class Assembly_ResolveEventHolder; }
namespace System::Reflection { class ManifestResourceInfo; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class RuntimeAssembly; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Security::Policy { class Evidence; }

#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_0_OFFSET UNITYSDK_OFFSET(0x1DD161B0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_10_10_OFFSET UNITYSDK_OFFSET(0x1DD162E0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_11_11_OFFSET UNITYSDK_OFFSET(0x1DD16330)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_12_12_OFFSET UNITYSDK_OFFSET(0x1DD16340)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_13_13_OFFSET UNITYSDK_OFFSET(0x1DD16350)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_14_14_OFFSET UNITYSDK_OFFSET(0x1DD16360)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_15_15_OFFSET UNITYSDK_OFFSET(0x1DD16370)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_16_16_OFFSET UNITYSDK_OFFSET(0x1DD16760)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_17_17_OFFSET UNITYSDK_OFFSET(0x1DD16910)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_18_18_OFFSET UNITYSDK_OFFSET(0x1DD16930)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_19_19_OFFSET UNITYSDK_OFFSET(0x1DD16960)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_1_OFFSET UNITYSDK_OFFSET(0x1DD161F0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_20_20_OFFSET UNITYSDK_OFFSET(0x1DD16990)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_21_21_OFFSET UNITYSDK_OFFSET(0x1DD169C0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_22_22_OFFSET UNITYSDK_OFFSET(0x1DD169F0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_23_23_OFFSET UNITYSDK_OFFSET(0x1DD16A20)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_24_24_OFFSET UNITYSDK_OFFSET(0x1DD16A40)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_25_25_OFFSET UNITYSDK_OFFSET(0x1DD16A60)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_26_26_OFFSET UNITYSDK_OFFSET(0x1DD16A80)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_27_27_OFFSET UNITYSDK_OFFSET(0x1DD16AB0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_28_28_OFFSET UNITYSDK_OFFSET(0x1DD16AC0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_29_29_OFFSET UNITYSDK_OFFSET(0x1DD16B10)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_2_2_OFFSET UNITYSDK_OFFSET(0x1DD16200)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_30_30_OFFSET UNITYSDK_OFFSET(0x1DD16290)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_31_31_OFFSET UNITYSDK_OFFSET(0x1DD16B30)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_32_32_OFFSET UNITYSDK_OFFSET(0x1DD16BB0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_33_33_OFFSET UNITYSDK_OFFSET(0x1DD16BC0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_34_34_OFFSET UNITYSDK_OFFSET(0x1DD170A0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_35_35_OFFSET UNITYSDK_OFFSET(0x1DD17090)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_36_36_OFFSET UNITYSDK_OFFSET(0x1DD170B0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_37_37_OFFSET UNITYSDK_OFFSET(0x1DD17130)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_38_38_OFFSET UNITYSDK_OFFSET(0x1DD171B0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_39_39_OFFSET UNITYSDK_OFFSET(0x1DD17290)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_3_3_OFFSET UNITYSDK_OFFSET(0x1DD16210)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_40_40_OFFSET UNITYSDK_OFFSET(0x1DD17220)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_41_41_OFFSET UNITYSDK_OFFSET(0x1DD172A0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_42_42_OFFSET UNITYSDK_OFFSET(0x1DD17340)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_43_43_OFFSET UNITYSDK_OFFSET(0x1DD17360)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_44_44_OFFSET UNITYSDK_OFFSET(0x1DD173D0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_45_45_OFFSET UNITYSDK_OFFSET(0x1DD173E0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_46_46_OFFSET UNITYSDK_OFFSET(0x1DD17430)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_47_47_OFFSET UNITYSDK_OFFSET(0x1DD17450)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_48_48_OFFSET UNITYSDK_OFFSET(0x1DD17460)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_49_49_OFFSET UNITYSDK_OFFSET(0x1DD17540)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_4_4_OFFSET UNITYSDK_OFFSET(0x1DD16220)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_50_50_OFFSET UNITYSDK_OFFSET(0x1DD17550)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_51_51_OFFSET UNITYSDK_OFFSET(0x1DD17560)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_52_52_OFFSET UNITYSDK_OFFSET(0x1DD175C0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_53_53_OFFSET UNITYSDK_OFFSET(0x1DD17680)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_54_54_OFFSET UNITYSDK_OFFSET(0x1DD176D0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_55_55_OFFSET UNITYSDK_OFFSET(0x1DD17720)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_56_56_OFFSET UNITYSDK_OFFSET(0x1DD17770)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_57_57_OFFSET UNITYSDK_OFFSET(0x1DD166E0)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_5_5_OFFSET UNITYSDK_OFFSET(0x1DD16230)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_6_6_OFFSET UNITYSDK_OFFSET(0x1DD16240)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_7_7_OFFSET UNITYSDK_OFFSET(0x1DD16250)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_8_8_OFFSET UNITYSDK_OFFSET(0x1DD16260)
#define SYSTEM_REFLECTION_ASSEMBLY_METHOD_9_9_OFFSET UNITYSDK_OFFSET(0x1DD162C0)

namespace System::Reflection
{
	inline static constexpr unsigned int Assembly_TypeDefinitionIndex = 566;

	class Assembly : public ::System::Object
	{
	public:
		::System::IntPtr Field_0; // 0x10
		::System::Reflection::Assembly_ResolveEventHolder* Field_1; // 0x18
		::System::Object* Field_2; // 0x20
		::System::Object* Field_3; // 0x28
		::System::Object* Field_4; // 0x30
		::System::Object* Field_5; // 0x38
		::System::Object* Field_6; // 0x40
		::System::Object* Field_7; // 0x48
		::System::Boolean Field_8; // 0x50
		::System::Byte _padding0[0x7];
		::System::String* Field_9; // 0x58

		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_0_OFFSET))(this);
		}

		::System::String* Method_1_1(::System::Boolean escaped)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_1_1_OFFSET))(this, escaped);
		}

		::System::String* Method_2_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_2_2_OFFSET))(this);
		}

		::System::String* Method_3_3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_3_3_OFFSET))(this);
		}

		static ::System::String* Method_4_4()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_4_4_OFFSET))();
		}

		::System::String* Method_5_5(::System::Boolean escaped)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_5_5_OFFSET))(this, escaped);
		}

		::System::String* Method_6_6()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_6_6_OFFSET))(this);
		}

		::System::String* Method_7_7()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_7_7_OFFSET))(this);
		}

		::System::String* Method_8_8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_8_8_OFFSET))(this);
		}

		::System::String* Method_9_9()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_9_9_OFFSET))(this);
		}

		::System::Void Method_10_10(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_10_10_OFFSET))(this, info, context);
		}

		::System::Boolean Method_11_11(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_11_11_OFFSET))(this, attributeType, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_12_12(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_12_12_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_13_13(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_13_13_OFFSET))(this, attributeType, inherit);
		}

		::System::IntPtr Method_14_14(::System::String* name, ::System::Int32& size, ::System::Reflection::Module*& module)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::String*, ::System::Int32&, ::System::Reflection::Module*&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_14_14_OFFSET))(this, name, size, module);
		}

		::System::IO::Stream* Method_15_15(::System::String* name)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_15_15_OFFSET))(this, name);
		}

		::System::IO::Stream* Method_16_16(::System::Type* type, ::System::String* name, ::System::Boolean skipSecurityCheck, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_16_16_OFFSET))(this, type, name, skipSecurityCheck, stackMark);
		}

		::System::IO::Stream* Method_17_17(::System::String* name, ::System::Threading::StackCrawlMark& stackMark, ::System::Boolean skipSecurityCheck)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::String*, ::System::Threading::StackCrawlMark&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_17_17_OFFSET))(this, name, stackMark, skipSecurityCheck);
		}

		::System::String* Method_18_18()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_18_18_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* Method_19_19()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_19_19_OFFSET))(this);
		}

		::System::Version* Method_20_20()
		{
			return ((::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_20_20_OFFSET))(this);
		}

		::System::Reflection::AssemblyNameFlags Method_21_21()
		{
			return ((::System::Reflection::AssemblyNameFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_21_21_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* Method_22_22(::System::Boolean exportedOnly)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_22_22_OFFSET))(this, exportedOnly);
		}

		::Il2CppArray<::System::Type*>* Method_23_23()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_23_23_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* Method_24_24()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_24_24_OFFSET))(this);
		}

		::System::Type* Method_25_25(::System::String* name, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_25_25_OFFSET))(this, name, throwOnError);
		}

		::System::Type* Method_26_26(::System::String* name)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_26_26_OFFSET))(this, name);
		}

		::System::Type* Method_27_27(::System::Reflection::Module* module, ::System::String* name, ::System::Boolean throwOnError, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::Module*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_27_27_OFFSET))(this, module, name, throwOnError, ignoreCase);
		}

		::System::Reflection::AssemblyName* Method_28_28(::System::Boolean copiedName)
		{
			return ((::System::Reflection::AssemblyName*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_28_28_OFFSET))(this, copiedName);
		}

		::System::Reflection::AssemblyName* Method_29_29()
		{
			return ((::System::Reflection::AssemblyName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_29_29_OFFSET))(this);
		}

		::System::String* Method_30_30()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_30_30_OFFSET))(this);
		}

		static ::System::Reflection::Assembly* Method_31_31(::System::Type* type)
		{
			return ((::System::Reflection::Assembly*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_31_31_OFFSET))(type);
		}

		static ::System::Reflection::Assembly* Method_32_32()
		{
			return ((::System::Reflection::Assembly*(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_32_32_OFFSET))();
		}

		::System::Reflection::RuntimeAssembly* Method_33_33(::System::String* name, ::System::Globalization::CultureInfo* culture, ::System::Version* version, ::System::Boolean throwOnFileNotFound, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Reflection::RuntimeAssembly*(*)(::PVOID, ::System::String*, ::System::Globalization::CultureInfo*, ::System::Version*, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_33_33_OFFSET))(this, name, culture, version, throwOnFileNotFound, stackMark);
		}

		static ::System::Reflection::Assembly* Method_34_34(::System::String* assemblyFile, ::System::Boolean refonly)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_34_34_OFFSET))(assemblyFile, refonly);
		}

		static ::System::Reflection::Assembly* Method_35_35(::System::String* assemblyFile)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_35_35_OFFSET))(assemblyFile);
		}

		static ::System::Reflection::Assembly* Method_36_36(::System::String* assemblyString)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_36_36_OFFSET))(assemblyString);
		}

		static ::System::Reflection::Assembly* Method_37_37(::System::String* assemblyString)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_37_37_OFFSET))(assemblyString);
		}

		static ::System::Reflection::Assembly* Method_38_38(::System::String* partialName)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_38_38_OFFSET))(partialName);
		}

		static ::System::Reflection::Assembly* Method_39_39(::System::String* name, ::System::Security::Policy::Evidence* e)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*, ::System::Security::Policy::Evidence*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_39_39_OFFSET))(name, e);
		}

		static ::System::Reflection::Assembly* Method_40_40(::System::String* partialName, ::System::Security::Policy::Evidence* securityEvidence)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*, ::System::Security::Policy::Evidence*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_40_40_OFFSET))(partialName, securityEvidence);
		}

		static ::System::Reflection::Assembly* Method_41_41(::System::String* partialName, ::System::Security::Policy::Evidence* securityEvidence, ::System::Boolean oldBehavior)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*, ::System::Security::Policy::Evidence*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_41_41_OFFSET))(partialName, securityEvidence, oldBehavior);
		}

		::Il2CppArray<::System::Reflection::Module*>* Method_42_42()
		{
			return ((::Il2CppArray<::System::Reflection::Module*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_42_42_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::Module*>* Method_43_43()
		{
			return ((::Il2CppArray<::System::Reflection::Module*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_43_43_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* Method_44_44()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_44_44_OFFSET))(this);
		}

		static ::System::Reflection::Assembly* Method_45_45()
		{
			return ((::System::Reflection::Assembly*(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_45_45_OFFSET))();
		}

		static ::System::Reflection::Assembly* Method_46_46()
		{
			return ((::System::Reflection::Assembly*(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_46_46_OFFSET))();
		}

		::System::Boolean Method_47_47(::System::String* name, ::System::Reflection::ManifestResourceInfo* info)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Reflection::ManifestResourceInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_47_47_OFFSET))(this, name, info);
		}

		::System::Reflection::ManifestResourceInfo* Method_48_48(::System::String* resourceName)
		{
			return ((::System::Reflection::ManifestResourceInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_48_48_OFFSET))(this, resourceName);
		}

		::System::Boolean Method_49_49()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_49_49_OFFSET))(this);
		}

		::System::Int32 Method_50_50()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_50_50_OFFSET))(this);
		}

		::System::Boolean Method_51_51(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_51_51_OFFSET))(this, o);
		}

		static ::System::Exception* Method_52_52()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_52_52_OFFSET))();
		}

		::System::Type* Method_53_53(::System::String* name, ::System::Boolean throwOnError, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_53_53_OFFSET))(this, name, throwOnError, ignoreCase);
		}

		::System::Reflection::Module* Method_54_54(::System::String* name)
		{
			return ((::System::Reflection::Module*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_54_54_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::Module*>* Method_55_55(::System::Boolean getResourceModules)
		{
			return ((::Il2CppArray<::System::Reflection::Module*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_55_55_OFFSET))(this, getResourceModules);
		}

		static ::System::Boolean Method_56_56(::System::Reflection::Assembly* left, ::System::Reflection::Assembly* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::Assembly*, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_56_56_OFFSET))(left, right);
		}

		static ::System::Boolean Method_57_57(::System::Reflection::Assembly* left, ::System::Reflection::Assembly* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::Assembly*, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_METHOD_57_57_OFFSET))(left, right);
		}
	};
}
