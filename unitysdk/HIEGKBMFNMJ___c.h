#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIEGKBMFNMJ;
namespace System { class Object; }

#define HIEGKBMFNMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F88CBD0)
#define HIEGKBMFNMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F88CC10)
#define HIEGKBMFNMJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F88CC20)

inline static constexpr unsigned int HIEGKBMFNMJ___c_TypeDefinitionIndex = 28977;

	class HIEGKBMFNMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30E20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIEGKBMFNMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEGKBMFNMJ___C_CTOR_OFFSET))(this);
		}

		::HIEGKBMFNMJ* __cctor_b__28_0()
		{
			return ((::HIEGKBMFNMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEGKBMFNMJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
