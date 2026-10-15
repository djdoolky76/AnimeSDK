#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/Emit/OpCode.h"
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodInfo; }

#define IMLDJAENJDP_CCTOR_OFFSET UNITYSDK_OFFSET(0x164DF260)
#define IMLDJAENJDP_CJHMGBBFBOB_OFFSET UNITYSDK_OFFSET(0x164DEF30)
#define IMLDJAENJDP_FDEGLHPKKJL_OFFSET UNITYSDK_OFFSET(0x164DEE50)
#define IMLDJAENJDP_FNLPIKFAPIJ_OFFSET UNITYSDK_OFFSET(0x164DEC10)
#define IMLDJAENJDP_FPFMHFIIMPI_OFFSET UNITYSDK_OFFSET(0x164DDB90)
#define IMLDJAENJDP_IFPHCPMHLLJ_OFFSET UNITYSDK_OFFSET(0x164DEEB0)
#define IMLDJAENJDP_INIHEILIDLA_OFFSET UNITYSDK_OFFSET(0x164DEA30)
#define IMLDJAENJDP_JADKBGKFBAC_OFFSET UNITYSDK_OFFSET(0x164DDD50)
#define IMLDJAENJDP_JLDDHCKKADO_OFFSET UNITYSDK_OFFSET(0x164DE4A0)
#define IMLDJAENJDP_LDNOPMKGKGH_OFFSET UNITYSDK_OFFSET(0x164DEBC0)
#define IMLDJAENJDP_LFFJFEFHPHP_OFFSET UNITYSDK_OFFSET(0x164DE230)
#define IMLDJAENJDP_MODAIPIEFEP_OFFSET UNITYSDK_OFFSET(0x164DDF30)
#define IMLDJAENJDP_NKFPOCLGINE_OFFSET UNITYSDK_OFFSET(0x164DE7C0)

inline static constexpr unsigned int IMLDJAENJDP_TypeDefinitionIndex = 54786;

	class IMLDJAENJDP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Boolean>** StaticGet_PJOGJOLKPLN()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Boolean>**)UnitySDK::FromName("", "IMLDJAENJDP")->GetStaticField(0x6C240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMLDJAENJDP_CCTOR_OFFSET))();
		}

		static ::System::Boolean FPFMHFIIMPI(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + IMLDJAENJDP_FPFMHFIIMPI_OFFSET))(a1);
		}

		static ::System::Boolean JADKBGKFBAC(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + IMLDJAENJDP_JADKBGKFBAC_OFFSET))(a1);
		}

		static ::System::Boolean MODAIPIEFEP(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + IMLDJAENJDP_MODAIPIEFEP_OFFSET))(a1);
		}

		static ::System::Boolean LFFJFEFHPHP(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + IMLDJAENJDP_LFFJFEFHPHP_OFFSET))(a1);
		}

		static ::System::Boolean JLDDHCKKADO(::Il2CppArray<::System::Byte>* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Type*))((::PBYTE)hIl2Cpp + IMLDJAENJDP_JLDDHCKKADO_OFFSET))(a1, a2);
		}

		static ::System::Reflection::FieldInfo* NKFPOCLGINE(::System::Type* a1)
		{
			return ((::System::Reflection::FieldInfo*(*)(::System::Type*))((::PBYTE)hIl2Cpp + IMLDJAENJDP_NKFPOCLGINE_OFFSET))(a1);
		}

		static ::System::Reflection::Emit::OpCode INIHEILIDLA(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Reflection::Emit::OpCode(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + IMLDJAENJDP_INIHEILIDLA_OFFSET))(a1, a2);
		}

		static ::System::Reflection::Emit::OpCode CJHMGBBFBOB(::System::Byte a1)
		{
			return ((::System::Reflection::Emit::OpCode(*)(::System::Byte))((::PBYTE)hIl2Cpp + IMLDJAENJDP_CJHMGBBFBOB_OFFSET))(a1);
		}

		static ::System::Reflection::Emit::OpCode IFPHCPMHLLJ(::System::Byte a1)
		{
			return ((::System::Reflection::Emit::OpCode(*)(::System::Byte))((::PBYTE)hIl2Cpp + IMLDJAENJDP_IFPHCPMHLLJ_OFFSET))(a1);
		}

		static ::System::Int32 LDNOPMKGKGH(::System::Reflection::Emit::OpCode a1)
		{
			return ((::System::Int32(*)(::System::Reflection::Emit::OpCode))((::PBYTE)hIl2Cpp + IMLDJAENJDP_LDNOPMKGKGH_OFFSET))(a1);
		}

		static ::System::Int32 FDEGLHPKKJL(::System::Reflection::Emit::OpCode a1)
		{
			return ((::System::Int32(*)(::System::Reflection::Emit::OpCode))((::PBYTE)hIl2Cpp + IMLDJAENJDP_FDEGLHPKKJL_OFFSET))(a1);
		}

		static ::System::Boolean FNLPIKFAPIJ(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + IMLDJAENJDP_FNLPIKFAPIJ_OFFSET))(a1, a2);
		}

	};
