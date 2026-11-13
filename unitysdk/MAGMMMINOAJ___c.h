#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MAGMMMINOAJ;
namespace System { class Object; }

#define MAGMMMINOAJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBB3D40)
#define MAGMMMINOAJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBB3D80)
#define MAGMMMINOAJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FBB3D90)

inline static constexpr unsigned int MAGMMMINOAJ___c_TypeDefinitionIndex = 31202;

	class MAGMMMINOAJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48DF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAGMMMINOAJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGMMMINOAJ___C_CTOR_OFFSET))(this);
		}

		::MAGMMMINOAJ* __cctor_b__28_0()
		{
			return ((::MAGMMMINOAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGMMMINOAJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
