#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JHKFCANMFOE;
namespace System { class Object; }

#define JHKFCANMFOE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E71A910)
#define JHKFCANMFOE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E71A940)
#define JHKFCANMFOE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E71A950)

inline static constexpr unsigned int JHKFCANMFOE___c_TypeDefinitionIndex = 28206;

	class JHKFCANMFOE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHKFCANMFOE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKFCANMFOE___C_CTOR_OFFSET))(this);
		}

		::JHKFCANMFOE* __cctor_b__28_0()
		{
			return ((::JHKFCANMFOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKFCANMFOE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
