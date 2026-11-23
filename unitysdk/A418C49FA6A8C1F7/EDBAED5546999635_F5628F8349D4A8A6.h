#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define A418C49FA6A8C1F7_EDBAED5546999635_F5628F8349D4A8A6_F25B2DADEF28F0D9_OFFSET UNITYSDK_OFFSET(0x42F9580)
#define A418C49FA6A8C1F7_EDBAED5546999635_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x42F9B70)
#define A418C49FA6A8C1F7_EDBAED5546999635_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int EDBAED5546999635_F5628F8349D4A8A6_TypeDefinitionIndex = 13366;

	class EDBAED5546999635_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::A418C49FA6A8C1F7::EDBAED5546999635_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::A418C49FA6A8C1F7::EDBAED5546999635_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(EDBAED5546999635_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_3<::System::String*, ::System::Single, ::System::Single>** StaticGet_BD38FA80B668E0D5()
		{
			return (::System::Func_3<::System::String*, ::System::Single, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(EDBAED5546999635_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_EDBAED5546999635_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_EDBAED5546999635_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Single F25B2DADEF28F0D9(::System::String* B9AEC57275825552, ::System::Single A45600735D539BFC)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_EDBAED5546999635_F5628F8349D4A8A6_F25B2DADEF28F0D9_OFFSET))(this, B9AEC57275825552, A45600735D539BFC);
		}
	};
}
