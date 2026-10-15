#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFBNEECALDM;
namespace System { class Object; }

#define MFBNEECALDM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9E86D0)
#define MFBNEECALDM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E8710)
#define MFBNEECALDM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9E8720)

inline static constexpr unsigned int MFBNEECALDM___c_TypeDefinitionIndex = 34945;

	class MFBNEECALDM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFBNEECALDM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBNEECALDM___C_CTOR_OFFSET))(this);
		}

		::MFBNEECALDM* __cctor_b__28_0()
		{
			return ((::MFBNEECALDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBNEECALDM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
