#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLPPDCIBMIH;
namespace System { class Object; }
namespace System { class String; }

#define GLPPDCIBMIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C619150)
#define GLPPDCIBMIH_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1C6193B0)
#define GLPPDCIBMIH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C6191D0)
#define GLPPDCIBMIH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C619160)
#define GLPPDCIBMIH_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1C619320)
#define GLPPDCIBMIH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C6192D0)
#define GLPPDCIBMIH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C619410)

inline static constexpr unsigned int GLPPDCIBMIH_TypeDefinitionIndex = 36194;

	class GLPPDCIBMIH : public ::System::Object
	{
	public:
		::System::Int32 GMDBHJKEAEI; // 0x10
		::System::UInt32 EOBLJJBOBIN; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + GLPPDCIBMIH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals(::GLPPDCIBMIH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GLPPDCIBMIH*))((::PBYTE)hIl2Cpp + GLPPDCIBMIH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GLPPDCIBMIH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPPDCIBMIH_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean FEIIDFFOICL(::GLPPDCIBMIH* a1, ::GLPPDCIBMIH* a2)
		{
			return ((::System::Boolean(*)(::GLPPDCIBMIH*, ::GLPPDCIBMIH*))((::PBYTE)hIl2Cpp + GLPPDCIBMIH_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::GLPPDCIBMIH* a1, ::GLPPDCIBMIH* a2)
		{
			return ((::System::Boolean(*)(::GLPPDCIBMIH*, ::GLPPDCIBMIH*))((::PBYTE)hIl2Cpp + GLPPDCIBMIH_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPPDCIBMIH_TOSTRING_OFFSET))(this);
		}

	};
