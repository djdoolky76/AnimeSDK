#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMFLFFJIEFC;
namespace System { class Object; }

#define BMFLFFJIEFC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E024A60)
#define BMFLFFJIEFC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E024AA0)
#define BMFLFFJIEFC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E024AB0)

inline static constexpr unsigned int BMFLFFJIEFC___c_TypeDefinitionIndex = 30818;

	class BMFLFFJIEFC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50200);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMFLFFJIEFC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFLFFJIEFC___C_CTOR_OFFSET))(this);
		}

		::BMFLFFJIEFC* __cctor_b__23_0()
		{
			return ((::BMFLFFJIEFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFLFFJIEFC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
