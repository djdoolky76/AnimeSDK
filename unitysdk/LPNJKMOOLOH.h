#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class ALMFLCJCHKP;
namespace System { class Object; }
namespace System { class String; }

#define LPNJKMOOLOH_ADGFICINCHC_OFFSET UNITYSDK_OFFSET(0xC095BB0)
#define LPNJKMOOLOH_ANMIFCDDEDK_OFFSET UNITYSDK_OFFSET(0xC095E20)
#define LPNJKMOOLOH_BIGCMPGGOKA_OFFSET UNITYSDK_OFFSET(0xC095A90)
#define LPNJKMOOLOH_HNDBOFEMNEH_OFFSET UNITYSDK_OFFSET(0xC095F70)
#define LPNJKMOOLOH_KNANGHAGDAK_OFFSET UNITYSDK_OFFSET(0xC095940)
#define LPNJKMOOLOH_MJPHIPPFEAF_OFFSET UNITYSDK_OFFSET(0xC095F00)
#define LPNJKMOOLOH_ONBNFHGFMCK_OFFSET UNITYSDK_OFFSET(0xC095D00)

inline static constexpr unsigned int LPNJKMOOLOH_TypeDefinitionIndex = 80530;

	class LPNJKMOOLOH : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FixPoint KNANGHAGDAK(::ALMFLCJCHKP* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::ALMFLCJCHKP*, ::System::String*))((::PBYTE)hIl2Cpp + LPNJKMOOLOH_KNANGHAGDAK_OFFSET))(a1, a2);
		}

		static ::System::Void BIGCMPGGOKA(::ALMFLCJCHKP* a1, ::System::String* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::ALMFLCJCHKP*, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + LPNJKMOOLOH_BIGCMPGGOKA_OFFSET))(a1, a2, a3);
		}

		static ::System::Object* ADGFICINCHC(::ALMFLCJCHKP* a1, ::System::String* a2)
		{
			return ((::System::Object*(*)(::ALMFLCJCHKP*, ::System::String*))((::PBYTE)hIl2Cpp + LPNJKMOOLOH_ADGFICINCHC_OFFSET))(a1, a2);
		}

		static ::System::Void ONBNFHGFMCK(::ALMFLCJCHKP* a1, ::System::String* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::ALMFLCJCHKP*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + LPNJKMOOLOH_ONBNFHGFMCK_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ANMIFCDDEDK(::ALMFLCJCHKP* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::ALMFLCJCHKP*, ::System::String*))((::PBYTE)hIl2Cpp + LPNJKMOOLOH_ANMIFCDDEDK_OFFSET))(a1, a2);
		}

		static ::System::Void MJPHIPPFEAF(::ALMFLCJCHKP* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::ALMFLCJCHKP*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + LPNJKMOOLOH_MJPHIPPFEAF_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean HNDBOFEMNEH(::ALMFLCJCHKP* a1)
		{
			return ((::System::Boolean(*)(::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + LPNJKMOOLOH_HNDBOFEMNEH_OFFSET))(a1);
		}

	};
