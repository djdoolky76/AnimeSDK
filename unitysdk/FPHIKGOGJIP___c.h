#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPHIKGOGJIP;
namespace System { class Object; }

#define FPHIKGOGJIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3DC470)
#define FPHIKGOGJIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3DC4A0)
#define FPHIKGOGJIP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E3DC4B0)

inline static constexpr unsigned int FPHIKGOGJIP___c_TypeDefinitionIndex = 32379;

	class FPHIKGOGJIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F650);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPHIKGOGJIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPHIKGOGJIP___C_CTOR_OFFSET))(this);
		}

		::FPHIKGOGJIP* __cctor_b__33_0()
		{
			return ((::FPHIKGOGJIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPHIKGOGJIP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
