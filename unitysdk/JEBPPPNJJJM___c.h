#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEBPPPNJJJM;
namespace System { class Object; }

#define JEBPPPNJJJM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6E6BD0)
#define JEBPPPNJJJM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6E6C00)
#define JEBPPPNJJJM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E6E6C10)

inline static constexpr unsigned int JEBPPPNJJJM___c_TypeDefinitionIndex = 29679;

	class JEBPPPNJJJM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B5E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEBPPPNJJJM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBPPPNJJJM___C_CTOR_OFFSET))(this);
		}

		::JEBPPPNJJJM* __cctor_b__23_0()
		{
			return ((::JEBPPPNJJJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBPPPNJJJM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
