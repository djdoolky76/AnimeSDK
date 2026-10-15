#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class PropertyInfo; }

#define PNOODNIGBHJ_BFELLFLMHJA_OFFSET UNITYSDK_OFFSET(0x1C4A1AC0)
#define PNOODNIGBHJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4A3C10)
#define PNOODNIGBHJ_CMOCMIKDDNH_OFFSET UNITYSDK_OFFSET(0x1C4A39C0)
#define PNOODNIGBHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A3C00)
#define PNOODNIGBHJ_DCCJADLHFOO_OFFSET UNITYSDK_OFFSET(0x1C4A2350)
#define PNOODNIGBHJ_EDMMDOLNANO_OFFSET UNITYSDK_OFFSET(0x1C4A24F0)
#define PNOODNIGBHJ_FHAPPCADGCE_OFFSET UNITYSDK_OFFSET(0x1C4A2640)
#define PNOODNIGBHJ_GFMNIKLNAMO_OFFSET UNITYSDK_OFFSET(0x1C4A1ED0)
#define PNOODNIGBHJ_JDGLBKDGKCC_OFFSET UNITYSDK_OFFSET(0x1C4A3420)
#define PNOODNIGBHJ_KBJFHFMFDKE_OFFSET UNITYSDK_OFFSET(0x1C4A1FE0)
#define PNOODNIGBHJ_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x1C4A2930)
#define PNOODNIGBHJ_NEIFILKMNEL_OFFSET UNITYSDK_OFFSET(0x1C4A2C20)
#define PNOODNIGBHJ_PGDKDJMKDNL_OFFSET UNITYSDK_OFFSET(0x1C4A2EA0)
#define PNOODNIGBHJ_PJBCFLGLPFL_OFFSET UNITYSDK_OFFSET(0x1C4A19B0)

inline static constexpr unsigned int PNOODNIGBHJ_TypeDefinitionIndex = 41379;

	class PNOODNIGBHJ : public ::System::Object
	{
	public:
		static ::System::Reflection::BindingFlags* StaticGet_GDHEAOBELOC()
		{
			return (::System::Reflection::BindingFlags*)UnitySDK::FromName("", "PNOODNIGBHJ")->GetStaticField(0x65B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOODNIGBHJ_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNOODNIGBHJ_CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Reflection::FieldInfo*>* PJBCFLGLPFL(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Reflection::FieldInfo*>*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + PNOODNIGBHJ_PJBCFLGLPFL_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>* BFELLFLMHJA(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + PNOODNIGBHJ_BFELLFLMHJA_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Reflection::PropertyInfo*>* GFMNIKLNAMO(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Reflection::PropertyInfo*>*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + PNOODNIGBHJ_GFMNIKLNAMO_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>* KBJFHFMFDKE(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + PNOODNIGBHJ_KBJFHFMFDKE_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::System::Reflection::MemberInfo*>* DCCJADLHFOO(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Reflection::MemberInfo*>*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + PNOODNIGBHJ_DCCJADLHFOO_OFFSET))(a1, a2);
		}

		static ::System::Reflection::MemberInfo* EDMMDOLNANO(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Reflection::MemberInfo*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + PNOODNIGBHJ_EDMMDOLNANO_OFFSET))(a1, a2);
		}

		static ::System::Void FHAPPCADGCE(::System::Reflection::MemberInfo* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Reflection::MemberInfo*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + PNOODNIGBHJ_FHAPPCADGCE_OFFSET))(a1, a2, a3);
		}

		static ::System::Object* MNGGAOFNGIP(::System::Reflection::MemberInfo* a1, ::System::Object* a2)
		{
			return ((::System::Object*(*)(::System::Reflection::MemberInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + PNOODNIGBHJ_MNGGAOFNGIP_OFFSET))(a1, a2);
		}

		static ::System::Type* NEIFILKMNEL(::System::Reflection::MemberInfo* a1)
		{
			return ((::System::Type*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + PNOODNIGBHJ_NEIFILKMNEL_OFFSET))(a1);
		}

		static ::System::Object* PGDKDJMKDNL(::System::Type* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + PNOODNIGBHJ_PGDKDJMKDNL_OFFSET))(a1, a2);
		}

		static ::System::Object* JDGLBKDGKCC(::System::Object* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + PNOODNIGBHJ_JDGLBKDGKCC_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 CMOCMIKDDNH(::System::Object* a1)
		{
			return ((::System::Int32(*)(::System::Object*))((::PBYTE)hIl2Cpp + PNOODNIGBHJ_CMOCMIKDDNH_OFFSET))(a1);
		}

	};
