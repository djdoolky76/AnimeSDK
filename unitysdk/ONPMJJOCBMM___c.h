#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONPMJJOCBMM;
namespace System { class Object; }

#define ONPMJJOCBMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F19B690)
#define ONPMJJOCBMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F19B6D0)
#define ONPMJJOCBMM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F19B6E0)

inline static constexpr unsigned int ONPMJJOCBMM___c_TypeDefinitionIndex = 35280;

	class ONPMJJOCBMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x27080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONPMJJOCBMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPMJJOCBMM___C_CTOR_OFFSET))(this);
		}

		::ONPMJJOCBMM* __cctor_b__28_0()
		{
			return ((::ONPMJJOCBMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPMJJOCBMM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
