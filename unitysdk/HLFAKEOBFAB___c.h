#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLFAKEOBFAB;
namespace System { class Object; }

#define HLFAKEOBFAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E58FF00)
#define HLFAKEOBFAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E58FF40)
#define HLFAKEOBFAB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E58FF50)

inline static constexpr unsigned int HLFAKEOBFAB___c_TypeDefinitionIndex = 33915;

	class HLFAKEOBFAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37D40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLFAKEOBFAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFAKEOBFAB___C_CTOR_OFFSET))(this);
		}

		::HLFAKEOBFAB* __cctor_b__33_0()
		{
			return ((::HLFAKEOBFAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFAKEOBFAB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
