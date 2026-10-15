#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDJOLGFOHLM;
namespace System { class Object; }

#define BDJOLGFOHLM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8EBBD0)
#define BDJOLGFOHLM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8EBC10)
#define BDJOLGFOHLM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E8EBC20)

inline static constexpr unsigned int BDJOLGFOHLM___c_TypeDefinitionIndex = 31465;

	class BDJOLGFOHLM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDJOLGFOHLM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJOLGFOHLM___C_CTOR_OFFSET))(this);
		}

		::BDJOLGFOHLM* __cctor_b__33_0()
		{
			return ((::BDJOLGFOHLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJOLGFOHLM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
