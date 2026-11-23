#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace A418C49FA6A8C1F7 { class B9A8F16A870DE44E; }
namespace System { class String; }
namespace System { class Type; }
template <typename T> class FCECB52A00C1344E;

#define BD75BCF25B6BD20F_B88E28EB17175F17_OFFSET UNITYSDK_OFFSET(0x4290D80)
#define BD75BCF25B6BD20F_B8C6609B632F53B7_OFFSET UNITYSDK_OFFSET(0x4290E70)
#define BD75BCF25B6BD20F_F53462EBC304FA21_OFFSET UNITYSDK_OFFSET(0x4290C60)
#define BD75BCF25B6BD20F__CCTOR_OFFSET UNITYSDK_OFFSET(0x4290F70)

inline static constexpr unsigned int BD75BCF25B6BD20F_TypeDefinitionIndex = 13902;

class BD75BCF25B6BD20F : public ::System::Object
{
public:
	static ::FCECB52A00C1344E<::System::String*>** StaticGet_FB9FC86D57E8807D()
	{
		return (::FCECB52A00C1344E<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BD75BCF25B6BD20F_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Type** StaticGet_FCFE8DDC901C4DD2()
	{
		return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(BD75BCF25B6BD20F_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::String** StaticGet_E45BB996291CEDA7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BD75BCF25B6BD20F_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Int32 B88E28EB17175F17(::A418C49FA6A8C1F7::B9A8F16A870DE44E* FDA7979CE82824CB)
	{
		return ((::System::Int32(*)(::A418C49FA6A8C1F7::B9A8F16A870DE44E*))((::PBYTE)hIl2Cpp + BD75BCF25B6BD20F_B88E28EB17175F17_OFFSET))(FDA7979CE82824CB);
	}

	static ::System::Void F53462EBC304FA21(::A418C49FA6A8C1F7::B9A8F16A870DE44E* FDA7979CE82824CB, ::System::String* B43A46E7D61A5F5A)
	{
		return ((::System::Void(*)(::A418C49FA6A8C1F7::B9A8F16A870DE44E*, ::System::String*))((::PBYTE)hIl2Cpp + BD75BCF25B6BD20F_F53462EBC304FA21_OFFSET))(FDA7979CE82824CB, B43A46E7D61A5F5A);
	}

	static ::System::String* B8C6609B632F53B7(::System::String* A5AA5989BFC0F874)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + BD75BCF25B6BD20F_B8C6609B632F53B7_OFFSET))(A5AA5989BFC0F874);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BD75BCF25B6BD20F__CCTOR_OFFSET))();
	}
};
