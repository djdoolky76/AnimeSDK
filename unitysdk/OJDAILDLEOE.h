#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define OJDAILDLEOE_CCTOR_OFFSET UNITYSDK_OFFSET(0xC7A45C0)
#define OJDAILDLEOE_CLPJBFIGCGP_OFFSET UNITYSDK_OFFSET(0xC7A40B0)
#define OJDAILDLEOE_HFMHIJEDBEH_OFFSET UNITYSDK_OFFSET(0xC7A3F90)
#define OJDAILDLEOE_JHFOPOHKPFO_OFFSET UNITYSDK_OFFSET(0xC7A3E10)
#define OJDAILDLEOE_JMGHOBDEPNL_OFFSET UNITYSDK_OFFSET(0xC7A4560)
#define OJDAILDLEOE_NHKPAGBBPMD_OFFSET UNITYSDK_OFFSET(0xC7A3B00)
#define OJDAILDLEOE_PDGGDANFDNN_OFFSET UNITYSDK_OFFSET(0xC7A42F0)

inline static constexpr unsigned int OJDAILDLEOE_TypeDefinitionIndex = 76013;

	class OJDAILDLEOE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_JMCIEONHDFF()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("", "OJDAILDLEOE")->GetStaticField(0x561C0);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_HEBLLDLKNNO()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)UnitySDK::FromName("", "OJDAILDLEOE")->GetStaticField(0x561C8);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_LOKGFJAEEOE()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("", "OJDAILDLEOE")->GetStaticField(0x561D0);
		}

		// static const ::System::Object KIPGJDOMPBH; // 0x0
		// static const ::System::Object KIHNNLKDKPB; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJDAILDLEOE_CCTOR_OFFSET))();
		}

		static ::System::Boolean NHKPAGBBPMD(::UnityEngine::Transform* a1, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a2, ::System::UInt64 a3, ::System::String* a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + OJDAILDLEOE_NHKPAGBBPMD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void JHFOPOHKPFO(::UnityEngine::Transform* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a3, ::System::Collections::Generic::List_1<::System::Int32>* a4)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + OJDAILDLEOE_JHFOPOHKPFO_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void CLPJBFIGCGP(::System::UInt64 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + OJDAILDLEOE_CLPJBFIGCGP_OFFSET))(a1, a2);
		}

		static ::System::Void PDGGDANFDNN(::System::UInt64 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + OJDAILDLEOE_PDGGDANFDNN_OFFSET))(a1, a2);
		}

		static ::System::Void HFMHIJEDBEH(::System::UInt64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::UInt64, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + OJDAILDLEOE_HFMHIJEDBEH_OFFSET))(a1, a2, a3);
		}

		static ::System::Void JMGHOBDEPNL(::System::UInt64 a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::System::UInt64, ::System::Byte))((::PBYTE)hIl2Cpp + OJDAILDLEOE_JMGHOBDEPNL_OFFSET))(a1, a2);
		}

	};
