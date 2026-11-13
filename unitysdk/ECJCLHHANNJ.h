#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameSandboxValidationSeverity.h"
#include "unitysdk/RPG/GameCore/LittleGameSandboxScope.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
class JPFJJLEPGBC;
class KMHLBLHBKKF;
class MCFDMCPGEBD;
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace RPG::GameCore { class LittleGameSandboxConfig; }
namespace RPG::GameCore { class LittleGameSandboxProfile; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ECJCLHHANNJ_AAIOLEJFKPA_OFFSET UNITYSDK_OFFSET(0x1C3D8B10)
#define ECJCLHHANNJ_ANMJDIMFIEO_OFFSET UNITYSDK_OFFSET(0x1C3D8C40)
#define ECJCLHHANNJ_DBCJCOGGODF_OFFSET UNITYSDK_OFFSET(0x1C3D8250)
#define ECJCLHHANNJ_DJMAKDCNPDA_OFFSET UNITYSDK_OFFSET(0x1C3D7D60)
#define ECJCLHHANNJ_FPOHACDKONN_OFFSET UNITYSDK_OFFSET(0x1C3D8E50)
#define ECJCLHHANNJ_IMOCBNIPDBE_OFFSET UNITYSDK_OFFSET(0x1C3D8370)
#define ECJCLHHANNJ_KOPBJPFFPLI_OFFSET UNITYSDK_OFFSET(0x1C3D8EB0)
#define ECJCLHHANNJ_MLIGPIGGKAA_OFFSET UNITYSDK_OFFSET(0x1C3D9110)
#define ECJCLHHANNJ_NGBJJNAFGCK_OFFSET UNITYSDK_OFFSET(0x1C3D8D60)

inline static constexpr unsigned int ECJCLHHANNJ_TypeDefinitionIndex = 61903;

	class ECJCLHHANNJ : public ::System::Object
	{
	public:
		// static const ::System::Object MCHFCMJFGJG; // 0x0
		static ::System::Collections::Generic::List_1<::KMHLBLHBKKF*>* DJMAKDCNPDA(::RPG::GameCore::LittleGameSandboxConfig* a1, ::RPG::GameCore::LittleGameLevelConfig* a2, ::RPG::GameCore::LevelLittleGameInfo* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Collections::Generic::List_1<::KMHLBLHBKKF*>*(*)(::RPG::GameCore::LittleGameSandboxConfig*, ::RPG::GameCore::LittleGameLevelConfig*, ::RPG::GameCore::LevelLittleGameInfo*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ECJCLHHANNJ_DJMAKDCNPDA_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Collections::Generic::List_1<::KMHLBLHBKKF*>* NGBJJNAFGCK(::RPG::GameCore::LittleGameSandboxProfile* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Nullable_1<::RPG::GameCore::LittleGameSandboxScope> a4)
		{
			return ((::System::Collections::Generic::List_1<::KMHLBLHBKKF*>*(*)(::RPG::GameCore::LittleGameSandboxProfile*, ::System::Boolean, ::System::Boolean, ::System::Nullable_1<::RPG::GameCore::LittleGameSandboxScope>))((::PBYTE)hIl2Cpp + ECJCLHHANNJ_NGBJJNAFGCK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void IMOCBNIPDBE(::RPG::GameCore::LittleGameSandboxProfile* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Nullable_1<::RPG::GameCore::LittleGameSandboxScope> a5, ::System::Collections::Generic::List_1<::KMHLBLHBKKF*>* a6)
		{
			return ((::System::Void(*)(::RPG::GameCore::LittleGameSandboxProfile*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Nullable_1<::RPG::GameCore::LittleGameSandboxScope>, ::System::Collections::Generic::List_1<::KMHLBLHBKKF*>*))((::PBYTE)hIl2Cpp + ECJCLHHANNJ_IMOCBNIPDBE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean KOPBJPFFPLI(::MCFDMCPGEBD* a1, ::RPG::GameCore::LittleGameSandboxScope a2, ::JPFJJLEPGBC* a3, ::System::String* a4)
		{
			return ((::System::Boolean(*)(::MCFDMCPGEBD*, ::RPG::GameCore::LittleGameSandboxScope, ::JPFJJLEPGBC*, ::System::String*))((::PBYTE)hIl2Cpp + ECJCLHHANNJ_KOPBJPFFPLI_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean MLIGPIGGKAA(::MCFDMCPGEBD* a1, ::RPG::GameCore::LittleGameSandboxScope a2, ::JPFJJLEPGBC* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Boolean(*)(::MCFDMCPGEBD*, ::RPG::GameCore::LittleGameSandboxScope, ::JPFJJLEPGBC*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ECJCLHHANNJ_MLIGPIGGKAA_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::Client::LittleGameSandboxValidationSeverity FPOHACDKONN(::RPG::GameCore::LittleGameSandboxScope a1, ::System::Nullable_1<::RPG::GameCore::LittleGameSandboxScope> a2)
		{
			return ((::RPG::Client::LittleGameSandboxValidationSeverity(*)(::RPG::GameCore::LittleGameSandboxScope, ::System::Nullable_1<::RPG::GameCore::LittleGameSandboxScope>))((::PBYTE)hIl2Cpp + ECJCLHHANNJ_FPOHACDKONN_OFFSET))(a1, a2);
		}

		static ::System::Void AAIOLEJFKPA(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LittleGameSandboxProfile*>* a4, ::System::Collections::Generic::List_1<::KMHLBLHBKKF*>* a5)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LittleGameSandboxProfile*>*, ::System::Collections::Generic::List_1<::KMHLBLHBKKF*>*))((::PBYTE)hIl2Cpp + ECJCLHHANNJ_AAIOLEJFKPA_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ANMJDIMFIEO(::RPG::GameCore::LittleGameLevelConfig* a1, ::RPG::GameCore::LevelLittleGameInfo* a2, ::System::Collections::Generic::List_1<::KMHLBLHBKKF*>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::LittleGameLevelConfig*, ::RPG::GameCore::LevelLittleGameInfo*, ::System::Collections::Generic::List_1<::KMHLBLHBKKF*>*))((::PBYTE)hIl2Cpp + ECJCLHHANNJ_ANMJDIMFIEO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DBCJCOGGODF(::System::Collections::Generic::List_1<::KMHLBLHBKKF*>* a1, ::RPG::Client::LittleGameSandboxValidationSeverity a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::KMHLBLHBKKF*>*, ::RPG::Client::LittleGameSandboxValidationSeverity, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ECJCLHHANNJ_DBCJCOGGODF_OFFSET))(a1, a2, a3, a4);
		}

	};
