#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/RPG/LogTag.h"
#include "unitysdk/System/Exception.h"
class HGCEOEHGPPE;
class KGPCBBIOGLB;
class PLIJICJHHDA;
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define HIAMBDKHMIJ_BEKGJDLAJGM_OFFSET UNITYSDK_OFFSET(0x1902ABE0)
#define HIAMBDKHMIJ_BNBHHHOOCAE_OFFSET UNITYSDK_OFFSET(0x1902A1F0)
#define HIAMBDKHMIJ_CBJLPOGLLOG_OFFSET UNITYSDK_OFFSET(0x1902A090)
#define HIAMBDKHMIJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x19029050)
#define HIAMBDKHMIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x19028FC0)
#define HIAMBDKHMIJ_FFEJLLFKLJJ_OFFSET UNITYSDK_OFFSET(0x1902AD80)
#define HIAMBDKHMIJ_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1902A030)
#define HIAMBDKHMIJ_GJCEFMFIONI_OFFSET UNITYSDK_OFFSET(0x1902C670)
#define HIAMBDKHMIJ_HAIEJIOJJMM_OFFSET UNITYSDK_OFFSET(0x19028EF0)
#define HIAMBDKHMIJ_HKHMKCILPID_OFFSET UNITYSDK_OFFSET(0x19029F10)
#define HIAMBDKHMIJ_HKKFKBACKCC_OFFSET UNITYSDK_OFFSET(0x1902C220)
#define HIAMBDKHMIJ_HODOIEKAKEP_OFFSET UNITYSDK_OFFSET(0x1902C870)
#define HIAMBDKHMIJ_IPHJBONPINK_OFFSET UNITYSDK_OFFSET(0x1902BB00)
#define HIAMBDKHMIJ_OPCMOKJGHEG_OFFSET UNITYSDK_OFFSET(0x1902C740)
#define HIAMBDKHMIJ_PCPBAFEDEJL_OFFSET UNITYSDK_OFFSET(0x1902BD10)

inline static constexpr unsigned int HIAMBDKHMIJ_TypeDefinitionIndex = 60886;

	class HIAMBDKHMIJ : public ::System::Exception
	{
	public:
		::System::Object* CJIEFEKCLND; // 0x88
		::KGPCBBIOGLB* CLEHCIAALEB; // 0x90
		::System::Text::StringBuilder* NENGLDPMGCG; // 0x98
		::HGCEOEHGPPE* FIJLEDEKBJP; // 0xA0
		::Il2CppArray<::System::Object*>* DCLGGMAEMAO; // 0xA8
		::RPG::Client::ExeCode JNOIGIDLFOL; // 0xB0
		::System::Void _ctor(::RPG::Client::ExeCode a1, ::HGCEOEHGPPE* a2, ::KGPCBBIOGLB* a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ExeCode, ::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*))((::PBYTE)hIl2Cpp + HIAMBDKHMIJ_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::RPG::Client::ExeCode a1, ::System::Exception* a2, ::HGCEOEHGPPE* a3, ::KGPCBBIOGLB* a4, ::System::Object* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ExeCode, ::System::Exception*, ::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*))((::PBYTE)hIl2Cpp + HIAMBDKHMIJ_CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean HAIEJIOJJMM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAMBDKHMIJ_HAIEJIOJJMM_OFFSET))(this);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAMBDKHMIJ_GET_MESSAGE_OFFSET))(this);
		}

		::System::String* CBJLPOGLLOG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAMBDKHMIJ_CBJLPOGLLOG_OFFSET))(this);
		}

		::System::Void BNBHHHOOCAE(::RPG::LogTag a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LogTag, ::System::String*))((::PBYTE)hIl2Cpp + HIAMBDKHMIJ_BNBHHHOOCAE_OFFSET))(this, a1, a2);
		}

		::System::Void FFEJLLFKLJJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HIAMBDKHMIJ_FFEJLLFKLJJ_OFFSET))(this, a1);
		}

		::System::Void BEKGJDLAJGM(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + HIAMBDKHMIJ_BEKGJDLAJGM_OFFSET))(this, a1);
		}

		static ::System::String* HKHMKCILPID(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HIAMBDKHMIJ_HKHMKCILPID_OFFSET))(a1);
		}

		::System::String* IPHJBONPINK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAMBDKHMIJ_IPHJBONPINK_OFFSET))(this);
		}

		::PLIJICJHHDA* PCPBAFEDEJL()
		{
			return ((::PLIJICJHHDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAMBDKHMIJ_PCPBAFEDEJL_OFFSET))(this);
		}

		::System::Void HKKFKBACKCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAMBDKHMIJ_HKKFKBACKCC_OFFSET))(this);
		}

		::System::Void GJCEFMFIONI(::System::String* a1, ::PLIJICJHHDA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::PLIJICJHHDA*))((::PBYTE)hIl2Cpp + HIAMBDKHMIJ_GJCEFMFIONI_OFFSET))(this, a1, a2);
		}

		::System::Void HODOIEKAKEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAMBDKHMIJ_HODOIEKAKEP_OFFSET))(this);
		}

		::System::String* OPCMOKJGHEG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAMBDKHMIJ_OPCMOKJGHEG_OFFSET))(this);
		}

	};
