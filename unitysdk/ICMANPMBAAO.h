#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICMANPMBAAO_Casing.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define ICMANPMBAAO_BDJPPIMOJBH_OFFSET UNITYSDK_OFFSET(0x15E522E0)
#define ICMANPMBAAO_EAOJFIKCIEH_1_OFFSET UNITYSDK_OFFSET(0x15E524A0)
#define ICMANPMBAAO_EAOJFIKCIEH_OFFSET UNITYSDK_OFFSET(0x15E52440)
#define ICMANPMBAAO_FPDLCIOFPKG_OFFSET UNITYSDK_OFFSET(0x15E527D0)
#define ICMANPMBAAO_JIJBALGKNGA_OFFSET UNITYSDK_OFFSET(0x15E52750)
#define ICMANPMBAAO_OEJKFPPIMGH_OFFSET UNITYSDK_OFFSET(0x15E52220)

inline static constexpr unsigned int ICMANPMBAAO_TypeDefinitionIndex = 82255;

	class ICMANPMBAAO : public ::System::Object
	{
	public:
		static ::System::Void OEJKFPPIMGH(::System::Byte a1, ::Il2CppArray<::System::Char>* a2, ::System::Int32 a3, ::ICMANPMBAAO_Casing a4)
		{
			return ((::System::Void(*)(::System::Byte, ::Il2CppArray<::System::Char>*, ::System::Int32, ::ICMANPMBAAO_Casing))((::PBYTE)hIl2Cpp + ICMANPMBAAO_OEJKFPPIMGH_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* BDJPPIMOJBH(::Il2CppArray<::System::Byte>* a1, ::ICMANPMBAAO_Casing a2)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::ICMANPMBAAO_Casing))((::PBYTE)hIl2Cpp + ICMANPMBAAO_BDJPPIMOJBH_OFFSET))(a1, a2);
		}

		static ::System::Boolean EAOJFIKCIEH(::System::String* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICMANPMBAAO_EAOJFIKCIEH_OFFSET))(a1, a2);
		}

		static ::System::Boolean EAOJFIKCIEH_1(::System::String* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + ICMANPMBAAO_EAOJFIKCIEH_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 JIJBALGKNGA(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + ICMANPMBAAO_JIJBALGKNGA_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* FPDLCIOFPKG()
		{
			return ((::Il2CppArray<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + ICMANPMBAAO_FPDLCIOFPKG_OFFSET))();
		}

	};
