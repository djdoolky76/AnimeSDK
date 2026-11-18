#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHOBPPAJKIL.h"

class EAIOHODECAO;
class NPMJPBBHEDE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CIFFJLEEEGL_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0x1EEA87F0)
#define CIFFJLEEEGL_FKEFMJHJFEI_OFFSET UNITYSDK_OFFSET(0x1EEA88B0)
#define CIFFJLEEEGL_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1EEA8590)
#define CIFFJLEEEGL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1EEA84E0)
#define CIFFJLEEEGL_PAOJGLNKKIO_OFFSET UNITYSDK_OFFSET(0x1EEA86D0)
#define CIFFJLEEEGL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEA8630)

inline static constexpr unsigned int CIFFJLEEEGL_TypeDefinitionIndex = 94741;

class CIFFJLEEEGL : public ::MHOBPPAJKIL
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::NPMJPBBHEDE*>* MBKFAEMHCNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFFJLEEEGL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + CIFFJLEEEGL_OJENCMOGDKL_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFFJLEEEGL_KMMIPNMJILI_OFFSET))(this);
	}

	::System::Boolean PAOJGLNKKIO(::System::String* HIAIKHDFCLN, ::NPMJPBBHEDE*& MPCFCIMLKEG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::NPMJPBBHEDE*&))((::PBYTE)hIl2Cpp + CIFFJLEEEGL_PAOJGLNKKIO_OFFSET))(this, HIAIKHDFCLN, MPCFCIMLKEG);
	}

	::System::Void ANPBCLAFCJB(::System::String* HIAIKHDFCLN, ::NPMJPBBHEDE* MPCFCIMLKEG)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::NPMJPBBHEDE*))((::PBYTE)hIl2Cpp + CIFFJLEEEGL_ANPBCLAFCJB_OFFSET))(this, HIAIKHDFCLN, MPCFCIMLKEG);
	}

	::System::Boolean FKEFMJHJFEI(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CIFFJLEEEGL_FKEFMJHJFEI_OFFSET))(this, HIAIKHDFCLN);
	}
};
