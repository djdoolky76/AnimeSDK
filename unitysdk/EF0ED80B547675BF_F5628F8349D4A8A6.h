#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define EF0ED80B547675BF_F5628F8349D4A8A6_F7B09DDDA1D3DC93_OFFSET UNITYSDK_OFFSET(0x393B0D0)
#define EF0ED80B547675BF_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x393C290)
#define EF0ED80B547675BF_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EF0ED80B547675BF_F5628F8349D4A8A6_TypeDefinitionIndex = 12368;

class EF0ED80B547675BF_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::EF0ED80B547675BF_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::EF0ED80B547675BF_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(EF0ED80B547675BF_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet_AD569E9A79F860BB()
	{
		return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(EF0ED80B547675BF_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EF0ED80B547675BF_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EF0ED80B547675BF_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void F7B09DDDA1D3DC93(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + EF0ED80B547675BF_F5628F8349D4A8A6_F7B09DDDA1D3DC93_OFFSET))(this, A6CAE7339066B0FB);
	}
};
