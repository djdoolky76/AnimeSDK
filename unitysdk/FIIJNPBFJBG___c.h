#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIIJNPBFJBG;
namespace System { class Object; }

#define FIIJNPBFJBG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E398720)
#define FIIJNPBFJBG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E398760)
#define FIIJNPBFJBG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E398770)

inline static constexpr unsigned int FIIJNPBFJBG___c_TypeDefinitionIndex = 29248;

	class FIIJNPBFJBG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x600D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIIJNPBFJBG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIJNPBFJBG___C_CTOR_OFFSET))(this);
		}

		::FIIJNPBFJBG* __cctor_b__28_0()
		{
			return ((::FIIJNPBFJBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIJNPBFJBG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
