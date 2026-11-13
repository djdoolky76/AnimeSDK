#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFPGNGNBOBJ;
namespace System { class Object; }

#define JFPGNGNBOBJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20626F00)
#define JFPGNGNBOBJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20626F40)
#define JFPGNGNBOBJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20626F50)

inline static constexpr unsigned int JFPGNGNBOBJ___c_TypeDefinitionIndex = 31281;

	class JFPGNGNBOBJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FD80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFPGNGNBOBJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ___C_CTOR_OFFSET))(this);
		}

		::JFPGNGNBOBJ* __cctor_b__23_0()
		{
			return ((::JFPGNGNBOBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
