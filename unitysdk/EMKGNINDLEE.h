#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLAKFODMCPH;
class HLJNBBHKKMI;
class LPHINGPIEAJ;
namespace RPG::Client::LittleGame { template <typename T> class LevelGraphService_1; }
namespace System { class String; }

#define EMKGNINDLEE_CTOR_OFFSET UNITYSDK_OFFSET(0x187E1590)
#define EMKGNINDLEE_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x187E1730)
#define EMKGNINDLEE_KHMLABMGKDL_OFFSET UNITYSDK_OFFSET(0x187E16A0)
#define EMKGNINDLEE_PFGPCBGGPKH_OFFSET UNITYSDK_OFFSET(0x187E15F0)

inline static constexpr unsigned int EMKGNINDLEE_TypeDefinitionIndex = 79951;

	class EMKGNINDLEE : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::LevelGraphService_1<::LPHINGPIEAJ*>* ANHKLILOAFM; // 0x10
		::System::Void _ctor(::HLJNBBHKKMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + EMKGNINDLEE_CTOR_OFFSET))(this, a1);
		}

		::System::Void PFGPCBGGPKH(::LPHINGPIEAJ* a1, ::GLAKFODMCPH* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*, ::GLAKFODMCPH*, ::System::String*))((::PBYTE)hIl2Cpp + EMKGNINDLEE_PFGPCBGGPKH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KHMLABMGKDL(::LPHINGPIEAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + EMKGNINDLEE_KHMLABMGKDL_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKGNINDLEE_HADOHLNHHGB_OFFSET))(this);
		}

	};
