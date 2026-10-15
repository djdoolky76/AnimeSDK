#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDABINKIAGM;
namespace System { class Object; }

#define BDABINKIAGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E913890)
#define BDABINKIAGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9138D0)
#define BDABINKIAGM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E9138E0)

inline static constexpr unsigned int BDABINKIAGM___c_TypeDefinitionIndex = 34324;

	class BDABINKIAGM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDABINKIAGM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDABINKIAGM___C_CTOR_OFFSET))(this);
		}

		::BDABINKIAGM* __cctor_b__38_0()
		{
			return ((::BDABINKIAGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDABINKIAGM___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
