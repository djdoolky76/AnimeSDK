#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LJAPOEINABO;
namespace System { template <typename T> class Func_1; }

#define ENLFDODLGBA__CTOR_OFFSET UNITYSDK_OFFSET(0x14182000)

inline static constexpr unsigned int ENLFDODLGBA_TypeDefinitionIndex = 51284;

class ENLFDODLGBA : public ::System::Object
{
public:
	::System::Func_1<::LJAPOEINABO*>* MMGGDIMLLIP; // 0x10
	::System::Boolean HGLPMBGEABP; // 0x18

	::System::Void _ctor(::System::Boolean JIPOIHGGHFD, ::System::Func_1<::LJAPOEINABO*>* DEAJJLPOJOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Func_1<::LJAPOEINABO*>*))((::PBYTE)hIl2Cpp + ENLFDODLGBA__CTOR_OFFSET))(this, JIPOIHGGHFD, DEAJJLPOJOM);
	}
};
