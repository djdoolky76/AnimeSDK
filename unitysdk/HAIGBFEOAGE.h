#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define HAIGBFEOAGE_BOEFMCPBLHK_OFFSET UNITYSDK_OFFSET(0x1CAFBB80)
#define HAIGBFEOAGE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CAFBF40)
#define HAIGBFEOAGE_DNDHIKJJEPG_OFFSET UNITYSDK_OFFSET(0x1CAFB240)
#define HAIGBFEOAGE_HMADBHBLMJG_OFFSET UNITYSDK_OFFSET(0x1CAFB830)
#define HAIGBFEOAGE_HMHJKOFOCHB_OFFSET UNITYSDK_OFFSET(0x1CAFBE20)
#define HAIGBFEOAGE_IJJACLEDAPC_OFFSET UNITYSDK_OFFSET(0x1CAFB450)
#define HAIGBFEOAGE_JLFLCNCEBMC_OFFSET UNITYSDK_OFFSET(0x1CAFB770)
#define HAIGBFEOAGE_JPNGHKMGFHB_OFFSET UNITYSDK_OFFSET(0x1CAFAF90)
#define HAIGBFEOAGE_OIFFKDOJBOE_1_OFFSET UNITYSDK_OFFSET(0x1CAFBB20)
#define HAIGBFEOAGE_OIFFKDOJBOE_OFFSET UNITYSDK_OFFSET(0x1CAFBA30)
#define HAIGBFEOAGE_PFENFNFDDOM_OFFSET UNITYSDK_OFFSET(0x1CAFACB0)
#define HAIGBFEOAGE_POJCNGOAOCG_OFFSET UNITYSDK_OFFSET(0x1CAFB1E0)

inline static constexpr unsigned int HAIGBFEOAGE_TypeDefinitionIndex = 36123;

	class HAIGBFEOAGE : public ::System::Object
	{
	public:
		static ::System::Text::StringBuilder** StaticGet_LIOJKFIGGIJ()
		{
			return (::System::Text::StringBuilder**)UnitySDK::FromName("", "HAIGBFEOAGE")->GetStaticField(0x57BD0);
		}

		static ::System::Int32* StaticGet_BMCJKDMCDAL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HAIGBFEOAGE")->GetStaticField(0x12A60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAIGBFEOAGE_CCTOR_OFFSET))();
		}

		static ::System::Text::StringBuilder* PFENFNFDDOM()
		{
			return ((::System::Text::StringBuilder*(*)())((::PBYTE)hIl2Cpp + HAIGBFEOAGE_PFENFNFDDOM_OFFSET))();
		}

		static ::System::Void JPNGHKMGFHB(::System::Byte a1, ::System::Text::StringBuilder* a2)
		{
			return ((::System::Void(*)(::System::Byte, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + HAIGBFEOAGE_JPNGHKMGFHB_OFFSET))(a1, a2);
		}

		static ::System::Byte POJCNGOAOCG(::System::Byte a1)
		{
			return ((::System::Byte(*)(::System::Byte))((::PBYTE)hIl2Cpp + HAIGBFEOAGE_POJCNGOAOCG_OFFSET))(a1);
		}

		static ::System::Void DNDHIKJJEPG(::System::Byte a1, ::System::Text::StringBuilder* a2)
		{
			return ((::System::Void(*)(::System::Byte, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + HAIGBFEOAGE_DNDHIKJJEPG_OFFSET))(a1, a2);
		}

		static ::System::Void IJJACLEDAPC(::System::Byte a1, ::System::Byte a2, ::System::Byte a3)
		{
			return ((::System::Void(*)(::System::Byte, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + HAIGBFEOAGE_IJJACLEDAPC_OFFSET))(a1, a2, a3);
		}

		static ::System::Byte JLFLCNCEBMC(::System::Char a1)
		{
			return ((::System::Byte(*)(::System::Char))((::PBYTE)hIl2Cpp + HAIGBFEOAGE_JLFLCNCEBMC_OFFSET))(a1);
		}

		static ::System::Byte HMADBHBLMJG(::System::Char a1, ::System::Char a2)
		{
			return ((::System::Byte(*)(::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + HAIGBFEOAGE_HMADBHBLMJG_OFFSET))(a1, a2);
		}

		static ::System::String* OIFFKDOJBOE(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HAIGBFEOAGE_OIFFKDOJBOE_OFFSET))(a1);
		}

		static ::System::Void OIFFKDOJBOE_1(::PVOID a1, ::System::Int32 a2, ::PVOID a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + HAIGBFEOAGE_OIFFKDOJBOE_1_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Byte>* BOEFMCPBLHK(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + HAIGBFEOAGE_BOEFMCPBLHK_OFFSET))(a1);
		}

		static ::System::Boolean HMHJKOFOCHB(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + HAIGBFEOAGE_HMHJKOFOCHB_OFFSET))(a1);
		}

	};
