#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace TMPro { class TMP_TextInfo; }

#define TMPRO_TMP_TEXT_F5628F8349D4A8A6_AB564ECF07791A57_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define TMPRO_TMP_TEXT_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x40AFD60)
#define TMPRO_TMP_TEXT_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Text_F5628F8349D4A8A6_TypeDefinitionIndex = 18211;

	class TMP_Text_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::TMPro::TMP_Text_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::TMPro::TMP_Text_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(TMP_Text_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::TMPro::TMP_TextInfo*>** StaticGet_BBC7D85831A6EC5B()
		{
			return (::System::Action_1<::TMPro::TMP_TextInfo*>**)Il2CppClass::FromTypeDefinitionIndex(TMP_Text_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXT_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXT_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void AB564ECF07791A57(::TMPro::TMP_TextInfo* A24289F86856ED60)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_TextInfo*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXT_F5628F8349D4A8A6_AB564ECF07791A57_OFFSET))(this, A24289F86856ED60);
		}
	};
}
