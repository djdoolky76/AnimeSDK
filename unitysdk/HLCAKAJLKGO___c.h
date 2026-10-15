#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLCAKAJLKGO;
namespace System { class Object; }

#define HLCAKAJLKGO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E58D5E0)
#define HLCAKAJLKGO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E58D620)
#define HLCAKAJLKGO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E58D630)

inline static constexpr unsigned int HLCAKAJLKGO___c_TypeDefinitionIndex = 27133;

	class HLCAKAJLKGO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37A20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLCAKAJLKGO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCAKAJLKGO___C_CTOR_OFFSET))(this);
		}

		::HLCAKAJLKGO* __cctor_b__23_0()
		{
			return ((::HLCAKAJLKGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCAKAJLKGO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
