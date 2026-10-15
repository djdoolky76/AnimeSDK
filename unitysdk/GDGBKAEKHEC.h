#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
namespace System { class Object; }

#define GDGBKAEKHEC_AKEJHIHBIDL_OFFSET UNITYSDK_OFFSET(0x1DD5B890)
#define GDGBKAEKHEC_BBGFMGGOMAN_OFFSET UNITYSDK_OFFSET(0x1DD5AB90)
#define GDGBKAEKHEC_CIJDJDICMMM_OFFSET UNITYSDK_OFFSET(0x1DD5ACE0)
#define GDGBKAEKHEC_ELFIMFJALIG_OFFSET UNITYSDK_OFFSET(0x1DD5B5C0)
#define GDGBKAEKHEC_JLBOBCFKDJH_1_OFFSET UNITYSDK_OFFSET(0x1DD5A640)
#define GDGBKAEKHEC_JLBOBCFKDJH_OFFSET UNITYSDK_OFFSET(0x1DD5A4C0)
#define GDGBKAEKHEC_PEAHIFLMDPI_1_OFFSET UNITYSDK_OFFSET(0x1DD5AAF0)
#define GDGBKAEKHEC_PEAHIFLMDPI_OFFSET UNITYSDK_OFFSET(0x1DD5A6D0)

inline static constexpr unsigned int GDGBKAEKHEC_TypeDefinitionIndex = 6271;

	class GDGBKAEKHEC : public ::System::Object
	{
	public:
		static ::System::Boolean JLBOBCFKDJH(::System::Object* a1, ::Il2CppArray<::System::Single>* a2, ::System::Object* a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::System::Object*, ::Il2CppArray<::System::Single>*, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + GDGBKAEKHEC_JLBOBCFKDJH_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean JLBOBCFKDJH_1(::System::Object* a1, ::Il2CppArray<::System::Single>* a2, ::RPG::MVector2 a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::System::Object*, ::Il2CppArray<::System::Single>*, ::RPG::MVector2, ::System::Single))((::PBYTE)hIl2Cpp + GDGBKAEKHEC_JLBOBCFKDJH_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean PEAHIFLMDPI(::System::Object* a1, ::Il2CppArray<::System::Single>* a2, ::System::Object* a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::System::Object*, ::Il2CppArray<::System::Single>*, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + GDGBKAEKHEC_PEAHIFLMDPI_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean PEAHIFLMDPI_1(::System::Object* a1, ::Il2CppArray<::System::Single>* a2, ::RPG::MVector3 a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::System::Object*, ::Il2CppArray<::System::Single>*, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + GDGBKAEKHEC_PEAHIFLMDPI_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void BBGFMGGOMAN(::System::Object* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GDGBKAEKHEC_BBGFMGGOMAN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean CIJDJDICMMM(::System::Object* a1, ::Il2CppArray<::System::Single>* a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::System::Object*, ::Il2CppArray<::System::Single>*, ::System::Object*))((::PBYTE)hIl2Cpp + GDGBKAEKHEC_CIJDJDICMMM_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ELFIMFJALIG(::Il2CppArray<::System::Single>* a1, ::Il2CppArray<::System::Single>* a2, ::Il2CppArray<::System::Single>* a3, ::Il2CppArray<::System::Single>* a4, ::System::Object* a5)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::System::Object*))((::PBYTE)hIl2Cpp + GDGBKAEKHEC_ELFIMFJALIG_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean AKEJHIHBIDL(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + GDGBKAEKHEC_AKEJHIHBIDL_OFFSET))(a1, a2);
		}

	};
