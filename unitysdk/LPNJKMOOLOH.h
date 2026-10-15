#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class ALMFLCJCHKP;
namespace System { class Object; }
namespace System { class String; }

#define LPNJKMOOLOH_ADGFICINCHC_OFFSET UNITYSDK_OFFSET(0xB834670)
#define LPNJKMOOLOH_ANMIFCDDEDK_OFFSET UNITYSDK_OFFSET(0xB8348E0)
#define LPNJKMOOLOH_BIGCMPGGOKA_OFFSET UNITYSDK_OFFSET(0xB834550)
#define LPNJKMOOLOH_HNDBOFEMNEH_OFFSET UNITYSDK_OFFSET(0xB834A30)
#define LPNJKMOOLOH_KNANGHAGDAK_OFFSET UNITYSDK_OFFSET(0xB834400)
#define LPNJKMOOLOH_MJPHIPPFEAF_OFFSET UNITYSDK_OFFSET(0xB8349C0)
#define LPNJKMOOLOH_ONBNFHGFMCK_OFFSET UNITYSDK_OFFSET(0xB8347C0)

inline static constexpr unsigned int LPNJKMOOLOH_TypeDefinitionIndex = 77795;

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
