#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define FKLOOILBAAL_AOPCMDNIALH_OFFSET UNITYSDK_OFFSET(0x1EBDB570)
#define FKLOOILBAAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBDBA30)
#define FKLOOILBAAL_CHMBJAFHKFA_1_OFFSET UNITYSDK_OFFSET(0x1EBDB0C0)
#define FKLOOILBAAL_CHMBJAFHKFA_OFFSET UNITYSDK_OFFSET(0x1EBDAEF0)
#define FKLOOILBAAL_EPFPNEOHBED_OFFSET UNITYSDK_OFFSET(0x1EBDB920)
#define FKLOOILBAAL_FGOMMMPIELH_OFFSET UNITYSDK_OFFSET(0x1EBDB150)
#define FKLOOILBAAL_FIAMPDCCFBH_OFFSET UNITYSDK_OFFSET(0x1EBDAA90)
#define FKLOOILBAAL_HHPINJFIEMH_OFFSET UNITYSDK_OFFSET(0x1EBDB370)
#define FKLOOILBAAL_IFCKJHEDDKJ_OFFSET UNITYSDK_OFFSET(0x1EBDB750)
#define FKLOOILBAAL_MOBPHKBIILO_OFFSET UNITYSDK_OFFSET(0x1EBDACE0)

inline static constexpr unsigned int FKLOOILBAAL_TypeDefinitionIndex = 35292;

	class FKLOOILBAAL : public ::System::Object
	{
	public:
		static ::System::DateTime* StaticGet_KPMINGLJDOH()
		{
			return (::System::DateTime*)UnitySDK::FromName("", "FKLOOILBAAL")->GetStaticField(0x12260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKLOOILBAAL_CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* FIAMPDCCFBH(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + FKLOOILBAAL_FIAMPDCCFBH_OFFSET))(a1);
		}

		static ::System::Byte MOBPHKBIILO(::System::Char a1)
		{
			return ((::System::Byte(*)(::System::Char))((::PBYTE)hIl2Cpp + FKLOOILBAAL_MOBPHKBIILO_OFFSET))(a1);
		}

		static ::System::Char CHMBJAFHKFA(::System::UInt32 a1)
		{
			return ((::System::Char(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FKLOOILBAAL_CHMBJAFHKFA_OFFSET))(a1);
		}

		static ::System::Char CHMBJAFHKFA_1(::System::Int32 a1)
		{
			return ((::System::Char(*)(::System::Int32))((::PBYTE)hIl2Cpp + FKLOOILBAAL_CHMBJAFHKFA_1_OFFSET))(a1);
		}

		static ::System::String* FGOMMMPIELH(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FKLOOILBAAL_FGOMMMPIELH_OFFSET))(a1);
		}

		static ::System::UInt32 HHPINJFIEMH(::System::DateTime a1)
		{
			return ((::System::UInt32(*)(::System::DateTime))((::PBYTE)hIl2Cpp + FKLOOILBAAL_HHPINJFIEMH_OFFSET))(a1);
		}

		static ::System::DateTime AOPCMDNIALH(::System::UInt32 a1)
		{
			return ((::System::DateTime(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FKLOOILBAAL_AOPCMDNIALH_OFFSET))(a1);
		}

		static ::System::Int32 IFCKJHEDDKJ()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FKLOOILBAAL_IFCKJHEDDKJ_OFFSET))();
		}

		static ::System::Int32 EPFPNEOHBED()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FKLOOILBAAL_EPFPNEOHBED_OFFSET))();
		}

	};
